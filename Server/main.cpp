#include "pch.h"

using namespace winrt;
using namespace Windows::ApplicationModel::Core;
using namespace Windows::Foundation;

void* __stdcall winrt_get_activation_factory(std::wstring_view const& name);

struct Server : implements<Server, IGetActivationFactory>
{
    auto GetActivationFactory(hstring const& classId)
    {
        IInspectable factory(winrt_get_activation_factory(classId), take_ownership_from_abi);

        if (!factory)
        {
            throw hresult_class_not_available(classId);
        }

        return factory;
    }
};

int main()
{
    try
    {
        puts("Server running");
        init_apartment();
        CoreApplication::RunWithActivationFactories(make<Server>());
        puts("Server stopped");
    }
    catch (hresult_error const& e)
    {
        printf("Server error: %ls\n", e.message().c_str());
    }
}

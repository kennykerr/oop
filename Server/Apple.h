#pragma once
#include "Apple.g.h"

namespace winrt::Server::implementation
{
    struct Apple : AppleT<Apple>
    {
        Apple() = default;

        hstring Name();
        void Name(hstring const& value);

        hstring m_name;
    };
}
namespace winrt::Server::factory_implementation
{
    struct Apple : AppleT<Apple, implementation::Apple>
    {
    };
}

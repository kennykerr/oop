#pragma once
#include "Orange.g.h"

namespace winrt::Server::implementation
{
    struct Orange : OrangeT<Orange>
    {
        Orange() = default;

        hstring Name();
        void Name(hstring const& value);

        hstring m_name;
    };
}

namespace winrt::Server::factory_implementation
{
    struct Orange : OrangeT<Orange, implementation::Orange>
    {
    };
}

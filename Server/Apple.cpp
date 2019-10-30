#include "pch.h"
#include "Apple.h"
#include "Apple.g.cpp"

namespace winrt::Server::implementation
{
    hstring Apple::Name()
    {
        return m_name;
    }
    void Apple::Name(hstring const& value)
    {
        m_name = value;
    }
}

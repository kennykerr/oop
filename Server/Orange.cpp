#include "pch.h"
#include "Orange.h"
#include "Orange.g.cpp"

namespace winrt::Server::implementation
{
    hstring Orange::Name()
    {
        return m_name;
    }

    void Orange::Name(hstring const& value)
    {
        m_name = value;
    }
}

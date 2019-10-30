#include "pch.h"

using namespace winrt;

int main()
{
    try
    {
        Server::Apple apple;
        printf("%ls\n", apple.Name().c_str());

        Server::Orange orange;
        printf("%ls\n", orange.Name().c_str());
    }
    catch (hresult_error const& e)
    {
        printf("Client error: %ls\n", e.message().c_str());
    }
}

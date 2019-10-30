#include "pch.h"

using namespace winrt;

int main()
{
    Server::Apple apple;
    printf("%ls\n", apple.Name().c_str());

    Server::Orange orange;
    printf("%ls\n", orange.Name().c_str());
}

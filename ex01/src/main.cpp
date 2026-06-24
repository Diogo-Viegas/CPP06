#include "../inc/Serializer.hpp"
#include <iostream>
#include <cstdint>
int main()
{
    Data a;
    a.id = 1;
    a.name = "42";

    Data *ptr = &a;
    uintptr_t rawPtr = Serializer::serialize(ptr);
    std::cout << rawPtr << std::endl;
    Data *newPtr = Serializer::deserialize(rawPtr);
    std::cout << newPtr << std::endl;
    return (0);
}
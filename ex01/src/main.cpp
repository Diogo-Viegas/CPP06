#include "../inc/Serializer.hpp"
#include <iostream>

int main()
{
    Data a;
    a.id = 1;
    a.name = "42";

    Data *ptr = &a;
    uintptr_t rawPtr = Serializer::serialize(ptr);
    Data *newPtr = Serializer::deserialize(rawPtr);

    std::cout << "Original Pointer: " << ptr << std::endl;
    std::cout << "Int Value:     " << rawPtr << std::endl;
    std::cout << "New Pointer:     " << newPtr << std::endl;

    
    if (newPtr == ptr) {
        std::cout << "Success" << std::endl;
    } else {
        std::cout << "Error" << std::endl;
    }

    return (0);
}
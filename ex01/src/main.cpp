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

    std::cout << "Ponteiro Original: " << ptr << std::endl;
    std::cout << "Valor Inteiro:     " << rawPtr << std::endl;
    std::cout << "Novo Ponteiro:     " << newPtr << std::endl;

    
    if (newPtr == ptr) {
        std::cout << "Sucesso: Os ponteiros são idênticos!" << std::endl;
    } else {
        std::cout << "Erro: Os ponteiros são diferentes!" << std::endl;
    }

    return (0);
}
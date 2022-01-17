#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void) {
    std::cout << "Estás en el constructor" << std::endl;
    this->foo = 42;
    std::cout << "this->foo: " << this->foo << std::endl;
    this->bar();
    return;
}

Sample::~Sample(void) {
    std::cout << "Estás en el destructor" << std::endl;
    return;
}

void    Sample::bar(void) {
    std::cout << "Estás en la funcion bar" << std::endl;
    return;
}
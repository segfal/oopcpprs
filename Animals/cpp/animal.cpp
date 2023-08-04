#include "Animal.hpp"

void Animal::speak(){
    std::cout << "Animal speaking" << std::endl;
}

Animal::~Animal(){
    std::cout << "Animal destroyed" << std::endl;
}

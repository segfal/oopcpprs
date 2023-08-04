#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__
#include <iostream>
#include <memory>



struct Animal{
    virtual void speak();
    virtual ~Animal();
};

#include "Animal.cpp"
struct Dog : Animal{
    void speak() override;
};

struct Cat : Animal{
    void speak() override;
};

struct AnimalFactory{
    static std::unique_ptr<Animal> create(const std::string& name){
        if(name == "dog"){
            return std::make_unique<Dog>();
        }
        else if(name == "cat"){
            return std::make_unique<Cat>();
        }
        else{
            return nullptr;
        }
    }
};







#endif /* __ANIMAL_HPP__ */
#pragma once
#include <iostream>
#include <vector>

// Абстрактний клас персонаж
class Character {
public:
    virtual ~Character() {};
    virtual std::string displayInfo() = 0;
};
#pragma once
#include <iostream>
#include <vector>

// Абстрактний клас персонаж
class Character {
public:
    virtual ~Character() {};
    virtual string displayInfo() = 0;
};
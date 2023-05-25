#pragma once
#include <iostream>
#include <vector>

// Конкретні класи персонажів
class Warrior : public Character {
public:
    std::string displayInfo() override {
        return "Warrior character";
    }
};
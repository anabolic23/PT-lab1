#pragma once
#include <iostream>
#include <vector>

// Конкретні класи персонажів
class Wizard : public Character {
public:
    std::string displayInfo() override {
        return "Wizard character";
    }
};
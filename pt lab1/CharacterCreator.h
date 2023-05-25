#pragma once
#include <iostream>
#include <vector>

// Абстрактний клас творця (фабрики персонажів)
class CharacterCreator {
public:
    virtual ~CharacterCreator() {};
    virtual Character* createCharacter() const = 0;
};
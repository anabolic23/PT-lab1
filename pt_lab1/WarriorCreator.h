#pragma once
#include <iostream>
#include <vector>

// Конкретні класи творців (фабрики персонажів)
class WarriorCreator : public CharacterCreator {
public:
    Character* createCharacter() const override {
        return new Warrior();
    }
};
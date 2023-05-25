#pragma once
#include <iostream>
#include <vector>

// Конкретні класи творців (фабрики персонажів)
class WizardCreator : public CharacterCreator {
public:
    Character* createCharacter() const override {
        return new Wizard();
    }
};
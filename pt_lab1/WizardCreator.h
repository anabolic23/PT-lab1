#pragma once
#include <iostream>
#include <vector>

// �������� ����� ������� (������� ���������)
class WizardCreator : public CharacterCreator {
public:
    Character* createCharacter() const override {
        return new Wizard();
    }
};
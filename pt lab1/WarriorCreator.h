#pragma once
#include <iostream>
#include <vector>

// �������� ����� ������� (������� ���������)
class WarriorCreator : public CharacterCreator {
public:
    Character* createCharacter() const override {
        return new Warrior();
    }
};
#pragma once
#include <iostream>
#include <vector>

// ����������� ���� ������ (������� ���������)
class CharacterCreator {
public:
    virtual ~CharacterCreator() {};
    virtual Character* createCharacter() const = 0;
};
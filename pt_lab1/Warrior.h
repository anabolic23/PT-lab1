#pragma once
#include <iostream>
#include <vector>

// �������� ����� ���������
class Warrior : public Character {
public:
    std::string displayInfo() override {
        return "Warrior character";
    }
};
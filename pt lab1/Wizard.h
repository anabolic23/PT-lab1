#pragma once
#include <iostream>
#include <vector>

// �������� ����� ���������
class Wizard : public Character {
public:
    std::string displayInfo() override {
        return "Wizard character";
    }
};
#pragma once
#include <iostream>
#include <vector>

// �������� ����� ���������
class Wizard : public Character {
public:
    string displayInfo() override {
        return "Wizard character";
    }
};
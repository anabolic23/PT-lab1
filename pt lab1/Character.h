#pragma once
#include <iostream>
#include <vector>

// ����������� ���� ��������
class Character {
public:
    virtual ~Character() {};
    virtual std::string displayInfo() = 0;
};
#pragma once
#include <iostream>
#include <vector>

// ����������� ���� ��������
class Character {
public:
    virtual ~Character() {};
    virtual string displayInfo() = 0;
};
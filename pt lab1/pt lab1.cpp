#include <iostream>
#include <vector>

using namespace std;

// Абстрактний клас персонаж
class Character {
public:
    virtual ~Character() {};
    virtual string displayInfo() = 0;
};

// Конкретні класи персонажів
class Warrior : public Character {
public:
    string displayInfo() override {
        return "Warrior character";
    }
};

class Wizard : public Character {
public:
    string displayInfo() override {
        return "Wizard character";
    }
};

// Абстрактний клас творця (фабрики персонажів)
class CharacterCreator {
public:
    virtual ~CharacterCreator() {};
    virtual Character* createCharacter() const = 0;
    std::string returnName() const {
        Character* character = this->createCharacter();
        std::string result = "Creator: The same creator's code has just worked with " + character->displayInfo();
        delete character;
        return result;
    }
};

// Конкретні класи творців (фабрики персонажів)
class WarriorCreator : public CharacterCreator {
public:
    Character* createCharacter() const override {
        return new Warrior();
    }
};

class WizardCreator : public CharacterCreator {
public:
    Character* createCharacter() const override {
        return new Wizard();
    }
};

void ClientCode(const CharacterCreator& creator) {
    std::cout << creator.returnName() << std::endl;
}

int main() {
    CharacterCreator* creator = new WarriorCreator();
    ClientCode(*creator);
    std::cout << std::endl;
    CharacterCreator* creator2 = new WizardCreator();
    ClientCode(*creator2);

    delete creator;
    delete creator2;
    return 0;   
}
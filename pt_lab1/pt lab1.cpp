#include <iostream>
#include <vector>
#include "Character.h"
#include "CharacterCreator.h"
#include "Warrior.h"
#include "WarriorCreator.h"
#include "Wizard.h"
#include "WizardCreator.h"


using namespace std;

int main() {
    CharacterCreator* creator = new WarriorCreator();
    std::cout << std::endl;
    CharacterCreator* creator2 = new WizardCreator();
    
    delete creator;
    delete creator2;
    return 0;   
}
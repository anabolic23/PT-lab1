#include "pch.h"
#include "CppUnitTest.h"
#include "..\pt lab1\Character.h"
#include "..\pt lab1\CharacterCreator.h"
#include "..\pt lab1\Warrior.h"
#include "..\pt lab1\WarriorCreator.h"
#include "..\pt lab1\Wizard.h"
#include "..\pt lab1\WizardCreator.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ptlab1tests
{
	TEST_CLASS(CharacterCreatorTests)
	{
	public:

		TEST_METHOD(CharacterCreator_CreateCharacter_ReturnsNotNull_forWarrior)
		{
			CharacterCreator* creator = new WarriorCreator();

			Character* character = creator->createCharacter();

			Assert::IsNotNull(character);
		}

		TEST_METHOD(CharacterCreator_CreateCharacter_ReturnsNotNull_forWizard)
		{
			CharacterCreator* creator = new WizardCreator();

			Character* character = creator->createCharacter();

			Assert::IsNotNull(character);
		}

		TEST_METHOD(CharacterCreator_CreateCharacter_DisplayInfo_ReturnsCorrectString_forWarrior)
		{
			CharacterCreator* creator = new WarriorCreator();

			Character* character = creator->createCharacter();

			std::string result = character->displayInfo();

			Assert::AreEqual(std::string("Warrior character"), result);

			delete creator;
			delete character;

		}

		TEST_METHOD(CharacterCreator_CreateCharacter_DisplayInfo_ReturnsCorrectString_forWizard)
		{
			CharacterCreator* creator = new WizardCreator();

			Character* character = creator->createCharacter();

			std::string result = character->displayInfo();

			Assert::AreEqual(std::string("Wizard character"), result);

			delete creator;
			delete character;

		}

	};
}

#include "pch.h"
#include "CppUnitTest.h"
#include "..\pt lab1\pt lab1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ptlab1tests
{
	TEST_CLASS(CharacterTests)
	{
	public:
		TEST_METHOD(Warrior_DisplayInfo_ReturnsCorrectString)
		{
			Warrior warrior;

			std::string result = warrior.displayInfo();

			Assert::AreEqual(std::string("Warrior character"), result);
		}

		TEST_METHOD(Wizard_DisplayInfo_ReturnsCorrectString)
		{
			Wizard wizard;

			std::string result = wizard.displayInfo();

			Assert::AreEqual(std::string("Wizard character"), result);
		}

	};

	TEST_CLASS(CharacterCreatorTests)
	{
	public:
		TEST_METHOD(WarriorCreator_ReturnName_ReturnsCorrectString)
		{
			WarriorCreator creator;

			std::string result = creator.returnName();

			Assert::AreEqual(std::string("Creator: The same creator's code has just worked with Warrior character"), result);
		}

		TEST_METHOD(WizardCreator_ReturnName_ReturnsCorrectString)
		{			
			WizardCreator creator;

			std::string result = creator.returnName();

			Assert::AreEqual(std::string("Creator: The same creator's code has just worked with Wizard character"), result);
		}

		TEST_METHOD(CharacterCreator_CreateCharacter_ReturnsNotNull)
		{		
			CharacterCreator* creator = new WarriorCreator();

			Character* character = creator->createCharacter();

			Assert::IsNotNull(character);
		}

	};
}

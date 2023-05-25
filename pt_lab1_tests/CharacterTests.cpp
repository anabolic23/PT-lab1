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
	
}

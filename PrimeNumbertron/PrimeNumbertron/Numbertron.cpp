#include "Numbertron.h"

Numbertron::Numbertron() :
UI(UserInterface::getInstance())
{}

Numbertron::~Numbertron()
{}

void Numbertron::run()
{
	int option = UI->numberInput();

	while (option != NO_MACHINE)
	{
		UI->printBootList();
		bootUp(option);
		option = UI->numberInput();
	}
}

void Numbertron::bootUp(int option)
{
	PrimeTime pT;
	switch (option)
	{
		case PRIME_TIME:
			pT.run();
			pT.stayOnTarget(UI->numberInput());
			pT.getToWork();
			UI->showPTray(pT.getTray());
		default:
			return;
	}
}
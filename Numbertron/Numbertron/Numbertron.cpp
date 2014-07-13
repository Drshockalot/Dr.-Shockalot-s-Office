#include "Numbertron.h"

Numbertron::Numbertron() :
UI(UserInterface::getInstance())
{}

Numbertron::~Numbertron()
{}

void Numbertron::run()
{
	UI->printBootList();
	int option = UI->numberInput();

	do
	{
		bootUp(option);
		UI->printBootList();
		option = UI->numberInput();
	} while (option != NO_MACHINE);
}

void Numbertron::bootUp(int option)
{
	switch (option)
	{
		case PRIME_TIME:
			p_PT = new PrimeTime;
			p_PT->run();
			delete p_PT;
		case AB_CONVERTER_M:
			p_ABC = new AB_Converter;
			p_ABC->run();
		default:
			return;
	}
}
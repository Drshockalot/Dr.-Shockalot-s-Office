#include "PrimeTime.h"

PrimeTime::PrimeTime() :
p_UI(UserInterface::getInstance())
{}

PrimeTime::~PrimeTime()
{}

void PrimeTime::addToTray(int primeNo)
{
	primeTray.push_back(primeNo);
}

void PrimeTime::stayOnTarget(int target)
{
	this->target = target;
}

void PrimeTime::getToWork()
{
	bool primeFlag = true;
	bool oneFlag = false;
	bool itselfFlag = false;

	for (int i = 0; i < target; ++i)
	{
		for (int primeCheck = 1; primeCheck < 10; ++primeCheck)
		{
			if (primeCheck == 1)
				if (i / primeCheck == i)
					oneFlag = true;
			if (i != 0)
				if (i / i == 1)
					itselfFlag = true;
			if (primeCheck != 1 && primeCheck != i)
				if (i % primeCheck == 0)
					primeFlag = false;
		}

		if (i != 1 && itselfFlag && oneFlag && primeFlag)
			addToTray(i);

		primeFlag = true;
		oneFlag = false;
		itselfFlag = false;
	}
}

list<int> PrimeTime::getTray() const
{
	return primeTray;
}

void PrimeTime::run()
{
	p_UI->printPTheader();
	stayOnTarget(p_UI->numberInput);
	getToWork();
	p_UI->showPTray(primeTray);
}
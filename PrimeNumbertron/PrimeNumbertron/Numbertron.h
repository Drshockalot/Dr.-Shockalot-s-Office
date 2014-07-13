#ifndef NUMBERTRON
#define NUMBERTRON

#include "UserInterface.h"
#include "Constants.h"
#include "PrimeTime.h"
#include <iostream>
#include <list>

using namespace std;

class Numbertron
{
public:
	Numbertron();
	~Numbertron();
	void run();
private:
	UserInterface* UI;
	void displayMenu();
	void bootUp(int choice);
	
};
#endif
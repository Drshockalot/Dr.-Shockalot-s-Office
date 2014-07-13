#ifndef NUMBERTRON
#define NUMBERTRON

#include "UserInterface.h"
#include "Constants.h"
#include "PrimeTime.h"
#include "AB_Converter.h"
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
	PrimeTime* p_PT;
	AB_Converter* p_ABC;
	void displayMenu();
	void bootUp(int choice);
	
};
#endif
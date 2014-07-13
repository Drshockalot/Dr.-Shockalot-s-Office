#include <iostream>

#include "Numbertron.h"
#include "UserInterface.h"
#include <cstdlib>
#include <thread>

using namespace std;

int main()
{
	Numbertron* numberomatic = new Numbertron();
	numberomatic->run();
	delete numberomatic;

	system("pause");
	cout << "\n\n";
	return 0;
}
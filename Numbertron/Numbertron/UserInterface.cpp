#include "UserInterface.h"

UserInterface* UserInterface::getInstance()
{
	static UserInterface UI;
	return &UI;
}

void UserInterface::showPTray(list<int> tray) const
{
	cout << "\nPrime Numbers found ->\n\n";

	while (tray.size() > 0)
	{
		cout << tray.front();
		cout << ", ";
		if (tray.size() % 10 == 0)
			cout << "\n";
		tray.pop_front();
	}
	cout << "\n\n";
}

int UserInterface::numberInput() const
{
	int num;
	cout << "Input(number) : ";
	cin >> num;
	while (!cin >> num)
	{
		cout << "Invalid input(number)\n";
		cout << "Try again : ";
		cin.clear();
		cin.ignore();
		cin >> num;
	}
	return num;
}

void UserInterface::printBootList() const
{
	cout <<	"---MACHINE LIST---\n\n";
	cout << "1 - PrimeTime\n";
	cout << "2 - AB Converter\n";
}

void UserInterface::printPTheader() const
{
	cout << "\n\n---PRIME TIME---\n";
	cout << "Insert maximum number ->\n";
}

void UserInterface::printABCHeader() const
{
	cout << "\n\n---ASCII/BINARY CONVERTER---\n";
}

int UserInterface::getConvertionOption() const
{

}
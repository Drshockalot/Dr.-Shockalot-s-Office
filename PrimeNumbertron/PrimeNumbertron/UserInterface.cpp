#include "UserInterface.h"

UserInterface* UserInterface::getInstance()
{
	static UserInterface UI;
	return &UI;
}

void UserInterface::showPTray(list<int> tray) const
{
	while (tray.size() > 0)
	{
		cout << tray.front();
		cout << ", ";
		if (tray.size() % 10 == 0)
			cout << "\n";
		tray.pop_front();
	}
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
	cout << "to be continued...\n";
}
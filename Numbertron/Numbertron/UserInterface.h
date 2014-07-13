#ifndef USERINTERFACE
#define USERINTERFACE

using namespace std;

#include <iostream>
#include <list>

class UserInterface
{
public:
	static UserInterface* getInstance();
	void showPTray(list<int> tray) const;
	int numberInput() const;
	void printBootList() const;
	void printPTheader() const;
	void printABCHeader() const;
	void getConvertionOption() const;
private:

};

#endif;
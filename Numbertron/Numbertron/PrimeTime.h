#ifndef PRIMETIME
#define PRIMETIME

#include <list>
#include "UserInterface.h"

using namespace std;

class PrimeTime
{
public:
	PrimeTime();
	~PrimeTime();
	void run();
	void addToTray(int primeNo);
	void stayOnTarget(int target);
	void getToWork();
	list<int> getTray() const;
private:
	list<int> primeTray;
	int target;
	UserInterface* p_UI;
};

#endif;
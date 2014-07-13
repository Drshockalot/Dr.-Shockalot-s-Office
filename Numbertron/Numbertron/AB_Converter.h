#ifndef AB_CONVERTER
#define AB_CONVERTER

using namespace std;
#include "UserInterface.h"

class AB_Converter
{
public:
	AB_Converter();
	~AB_Converter();
	void run();
	void convertToBinary();
	void convertToASCII();
private:
	UserInterface* p_UI;
};

#endif;
#include "AB_Converter.h"

AB_Converter::AB_Converter() :
p_UI(UserInterface::getInstance())
{}

AB_Converter::~AB_Converter()
{}

void AB_Converter::run()
{
	p_UI->printABCHeader();
	p_UI->getConvertionOption();
}

void AB_Converter::convertToASCII()
{

}

void AB_Converter::convertToBinary()
{

}


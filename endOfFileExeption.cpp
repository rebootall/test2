#include "endOfFileExeption.h"

const char* EndOfFileExeption::what() const throw () 
{
	return "End of File";
}

EndOfFileExeption::EndOfFileExeption() 
{

}

EndOfFileExeption::~EndOfFileExeption() 
{

}

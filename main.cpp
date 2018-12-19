#include <iostream>
#include "filereader.h"

using namespace std;

int main() 
{
	cout << "Enter file name: ";
	string fileName;
	cin >> fileName;
	FileReader file(fileName);
	cout << "Rows with two-digit number:" << endl;
	try
	{
		while(true)
		{
			cout << file.getRaw() << endl;
		}
	} catch(exception &e)
	{
		cout << e.what() << endl;
	}
	return 0;
}

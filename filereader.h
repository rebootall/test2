#ifndef FILEREADER_H_
#define FILEREADER_H_
#include <string>
#include <fstream>
#include "endOfFileExeption.h"

class FileReader{
public:
	FileReader(std::string file);
	~FileReader();
	std::string getRaw();
private:
	std::ifstream infile;
};



#endif /* FILEREADER_H_ */

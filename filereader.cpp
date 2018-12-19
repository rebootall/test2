#include "filereader.h"

std::string FileReader::getRaw() 
{
	std::string line;
	bool notfound = true;
	while (notfound) 
	{
		if (!std::getline(infile, line)) 
		{
			EndOfFileExeption e;
			throw e;
		}
		if (line.size() < 2) 
		{
			continue;
		}

		if (line.size() == 2) 
		{
			if (isdigit(line[0]) && isdigit(line[1])) 
			{
				notfound = false;
				continue;
			} else 
			{
				continue;
			}
		}
		if ((isdigit(line[0]) && isdigit(line[1]) && !isdigit(line[2])) || (isdigit(line[line.size() - 2]) 	&& isdigit(line[line.size() - 1]) && !isdigit(line[line.size() - 3]))) 
		{
			notfound = false;
			continue;
		}
		for (unsigned int i = 3; i < line.size(); i++) 
		{
			if (!isdigit(line[i - 3]) && isdigit(line[i - 2])	&& isdigit(line[i - 1]) && !isdigit(line[i])) 
		{
				notfound = false;
				break;
			}
		}
	}
	return line;
}

FileReader::FileReader(std::string file) 
{
	infile.open(file, std::ifstream::in);
}

FileReader::~FileReader() 
{
	infile.close();
}


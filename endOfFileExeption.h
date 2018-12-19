#ifndef ENDOFFILEEXEPTION_H_
#define ENDOFFILEEXEPTION_H_

#include <exception>

class EndOfFileExeption: public std::exception {
public:
	EndOfFileExeption();
	~EndOfFileExeption();
	virtual const char* what() const throw ();
};



#endif /* ENDOFFILEEXEPTION_H_ */

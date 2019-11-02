#ifndef PRODUCTION_H
#define PRODUCTION_H


#include <iostream>
#include <vector>

class Production{
public:
	int someMethod(int a);
	void takeNumbers(std::vector<int>* t_numsArray );
	bool checkSize(int t_size);
	bool checkNumbers(std::vector<int>* t_numsArray);
	bool checkForDupes(std::vector<int>* t_numsArray);
	
};

#endif // !PRODUCTION_H


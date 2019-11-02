#include <iostream>
#include <assert.h>

#include "../ProductionProject/Production.h"

using namespace std;

int main()
{
	Production p;
	std::vector<int> numbers;

	p.takeNumbers(&numbers);

		
	assert(p.checkSize(numbers.size()) == true);
	assert(p.checkNumbers(&numbers) == true);

	cin.get();
}
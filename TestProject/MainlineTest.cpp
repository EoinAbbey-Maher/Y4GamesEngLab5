#include <iostream>
#include <assert.h>

#include "../ProductionProject/Production.h"

using namespace std;

int main()
{
	Production p;
	std::vector<int> numbers;

	p.takeNumbers(&numbers);

	/// <summary>
	/// Checks the size of the Vector
	/// </summary>
	cout << "check Size Test" << std::endl;
	assert(p.checkSize(numbers.size()) == true);

	/// <summary>
	/// Checks if numbers in vector are between 1-46
	/// </summary>
	/// <returns></returns>
	cout << "check Numbers Test" << std::endl;
	assert(p.checkNumbers(&numbers) == true);

	/// <summary>
	/// Checks if numbers are repeated in Vector
	/// </summary>
	cout << "check For Dupes Test" << std::endl;
	assert(p.checkForDupes(&numbers) == false);
	std::system("Pause");
}
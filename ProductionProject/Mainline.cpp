#include "Production.h"
#include <assert.h>

int main()
{
	Production p;
	std::vector<int> numbers;

	p.takeNumbers(&numbers);


	assert(p.checkSize(numbers.size()) == true);
	assert(p.checkNumbers(&numbers) == true);

	return 0;
}

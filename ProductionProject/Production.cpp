#include "Production.h"

int Production::someMethod(int a)
{
	return a - a;
}

void Production::takeNumbers(std::vector<int>* t_numsArray)
{
	std::cout << "Please input 6 numbers";

	std::vector<int> nums;
	t_numsArray->clear();
	for (int i = 0; i < 6; i++)
	{
		t_numsArray->push_back(0);
		std::cin >> t_numsArray->at(i);
	}
}

bool Production::checkSize(int t_size)
{
	if (t_size == 6)
	{
		return true;
	}


	return false;
}

bool Production::checkNumbers(std::vector<int>* t_numsArray)
{
	for (int i = 0; i < t_numsArray->size(); i++)
	{
		if (!(t_numsArray->at(i) >= 1 && t_numsArray->at(i) <= 46))
		{
			return false;
		}
	}
	return true;
}

bool Production::checkForDupes(std::vector<int>* t_numsArray)
{
	for (int i = 0; i < t_numsArray->size(); i++)
	{
		for (int j = 0; j < t_numsArray->size; j++)
		{
			if (t_numsArray->at(i) == t_numsArray->at(j) && i != j)
			{
				return true; ///It has Found a Duplicate
			}
		}
	}
	return false; ///It hasnt found a duplicate
}

#ifndef PRODUCTION_H
#define PRODUCTION_H

#include <vector>
#include <iostream>
template <class T>
class Production{
public:

	T numberTest(std::vector<T> t_nums);
};

#endif //!PRODUCTION_H

template<class T>
inline T Production<T>::numberTest(std::vector<T> t_nums)
{
	return T();
}

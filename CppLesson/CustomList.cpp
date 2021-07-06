#include "CustomList.h"

template<typename T>
inline CustomList<T>::CustomList()
{
	this->begin = nullptr;
	this->count = 0;
}

template<typename T>
bool CustomList<T>::empty()
{
	if (this->begin == nullptr)
		return true;
	return false;
}

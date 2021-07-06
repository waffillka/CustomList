#pragma once
#include "Node.h"

template<typename T>
class CustomList
{
private:
	Node* begin;
	int count;

public:
	CustomList();
	
	void pop_front();
	void pop_back();
	void clear();

	void push_back();
	void push_front();

	bool empty();
};
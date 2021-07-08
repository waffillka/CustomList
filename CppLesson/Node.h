#pragma once
#include <iostream>
#include <memory>

template<typename T>
class Node
{
public:
	T info;
	std::shared_ptr<Node<T>> _next;

	Node(T info, std::shared_ptr<Node<T>> next)
	{
		this->info = info;
		this->_next = next;
	}

	Node()
	{
		T info = default(T);
		this->_next = nullptr;
	}
};


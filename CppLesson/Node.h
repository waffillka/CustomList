#pragma once
template<typename T>
class Node
{
public:
	T info;
	Node *_next;

	Node(T info, Node* next)
	{
		this->info = info;
		this->_next = next;
	}

	Node()
	{
		T info = default(T); //
		this->_next = nullptr;
	}
};


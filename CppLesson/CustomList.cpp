//#include "CustomList.h"
//#include <iostream>
//#include <memory>
//
//template<typename T>
//inline CustomList<T>::CustomList()
//{
//	this->begin = nullptr;
//	this->size = 0;
//}
//
//template<typename T>
//void CustomList<T>::pop_front()
//{
//	if (this->begin == nullptr)
//		return;
//
//	this->begin = this->begin->_next;
//	size--;
//}
//
//template<typename T>
//void CustomList<T>::pop_back()
//{
//	removeAt(size - 1);
//}
//
//template<typename T>
//void CustomList<T>::clear()
//{
//	this->begin = nullptr;
//	size = 0;
//}
//
//template<typename T>
//int CustomList<T>::Size()
//{
//	return size;
//}
//
//template<typename T>
//void CustomList<T>::insertAt(T data, int index)
//{
//	if (index > size - 1)
//		return;
//	else if (index == 0) {
//		push_front(data);
//	}
//	else {
//		auto temp = this->begin;
//
//		for (int i = 0; i < index; i++) {
//			temp = temp->_next;
//		}
//		auto newNode = std::make_shared<Node<T>>(data, temp->_next);
//		temp->_next = newNode;
//		size++;
//	}
//}
//
//template<typename T>
//void CustomList<T>::removeAt(int n)
//{
//	if (size == 0) {
//		return;
//	}
//	else if (n > this->size - 1)
//		return;
//	else if (n == 0) {
//		pop_front();
//	}
//
//	auto temp = this->begin;
//
//	for (int i = 0; i < n; i++) {
//		temp = temp->_next;
//	}
//	auto toDelete = temp->_next;
//	temp->_next = toDelete->_next;
//	delete toDelete;
//	size--;
//}
//
//template<typename T>
//void CustomList<T>::push_back(T info)
//{
//	insertAt(info, size - 1);
//}
//
//template<typename T>
//void CustomList<T>::push_front(T info)
//{
//	this->begin = std::make_shared<Node<T>>(this->begin, info);
//	size++;
//}
//
//template<typename T>
//inline bool CustomList<T>::empty()
//{
//	if (this->begin == nullptr)
//		return true;
//	return false;
//}
//
//template<typename T>
//T* CustomList<T>::ToArray(int& size)
//{
//	size = this->size;
//	if (size == 0)
//		return nullptr;
//	T* arr = new T[size]();
//
//	auto temp = this->begin;
//	for (int i = 0; i < this->size; ++i)
//	{
//		arr[i] = temp->info;
//		temp = temp->_next;
//	}
//	return arr;
//}
//
//

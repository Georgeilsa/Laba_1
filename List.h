#pragma once
#include "BitString.h"
#include <iostream>
#ifndef Source_main_h
#define Source_main_H

template<class T>
class List
{
public:
	List();
	int Getter_size();
	void add_last_element(T obj);
	void show();
	void Delete_last_element();
	void Delete_index(int counter);
	void add_index(T obj,int counter);
	void Delete_List();
    T Search_element(int counter);
	
protected:
	class Node
	{
	public:
		
		Node* prev;
		Node* next;
		T field;
		
		Node(T obj,Node*prev, Node* next = nullptr)
		{
			this->field = obj;
			this->next = next;
			this->prev = prev;

		}
		Node(T obj)
		{
			this->field = obj;
			this->next=nullptr;
			this->prev = nullptr;
		}
		
	};
	int size;
	Node* head;
};

template <typename T>
inline List<T>::List()
{
	size = 0;
	head = nullptr;
}
template <typename T>
inline int List<T>::Getter_size()
{
	return size;
}
template <typename T>
inline void List<T>::add_last_element(T obj)
{
	if (head == nullptr)
	{
		head = new Node(obj);

	}
	else
	{
		Node* cur = this->head;
		Node* prev;
		while (cur->next != nullptr)
		{
			prev = cur;
			cur = cur->next;
			cur->prev = prev;
		}
		cur->next = new Node(obj, cur);

	}
	size++;
}
template <typename T>
inline void List<T>::show()
{
	try
	{
		if (this->head == nullptr) throw "List is empty";

		Node* cur = this->head;
		std::cout << cur->field << std::endl;
		while (cur->next != nullptr)
		{
			cur = cur->next;
			std::cout << cur->field << std::endl;

		}
	}
	catch (const char* exception)
	{
		std::cout << "List is empty" << std::endl;

	}


}
template <typename T>
inline T List<T>::Search_element(int counter)
{
	
	int index = 0;
	Node* cur = this->head;
	while (cur != nullptr)
	{
		if (counter == index)
		{
			return cur->field;
		}
		cur = cur->next;
		index++;
	}
	try
	{
		if (cur == nullptr) throw "No element with which index";
	}
	catch (const char* exception)
	{
		std::cout << "No element with which index" << std::endl;
	}
}

template <typename T>
inline void List<T>::Delete_last_element()
{
	Node* cur = this->head;
	Node* prev;
	while (cur->next != nullptr)
	{
		prev = cur;
		cur = cur->next;

	}
	if (cur == head)
	{
		this->head = nullptr;
		delete cur;
	}
	else
	{
		cur->prev->next = nullptr;
		delete cur;
	}
	size--;
}
template <typename T>
inline void List<T>::Delete_index(int counter)
{
	int index = 0;
	Node* cur = this->head;
	while (cur != nullptr)
	{
		if (counter == index)
		{
			if (cur == head)
			{
				Node* temp = head;
				head = head->next;
				head->prev = nullptr;
				delete temp;
				break;

			}
			else if (cur->next == nullptr)
			{
				Node* temp = cur;
				cur = cur->prev;
				cur->next = nullptr;
				delete temp;
				break;
			}
			else
			{
				Node* prev = cur->prev;
				Node* next = cur->next;
				prev->next = cur->next;
				next->prev = cur->prev;
				delete cur;
				break;
			}
		}
		cur = cur->next;
		index++;
	}

	try
	{
		if (index != counter)throw "No element with which index";
		else { size--; }


	}
	catch (const char* exception)
	{
		std::cout << "No element with which index" << std::endl;
	}

}
template <typename T>
inline void List<T>::add_index(T obj, int counter)
{
	int index = 0;
	Node* cur = this->head;

	while (cur != nullptr)
	{
		if (counter == index)
		{
			if (cur == head)
			{
				Node* A = new Node(obj);
				cur->prev = A;
				A->next = cur;
				head = A;
				break;
			}
			else if (cur->next == nullptr)
			{
				Node* A = new Node(obj, cur);
				cur->next = A;
				break;
			}
			else
			{
				Node* A = new Node(obj, cur->prev, cur);
				cur->prev->next = A;
				cur->prev = A;
				break;
			}
		}
		cur = cur->next;
		index++;
	}

	try
	{
		if (index != counter)throw "Index is bigger than size of List";
		else { size++; }


	}
	catch (const char* exception)
	{
		std::cout << "No element with which index" << std::endl;
	}
}
template <typename T>
inline void List<T>::Delete_List()
{
	Node* cur = head;
	while (cur != nullptr)
	{
		Node* del = cur;
		cur = cur->next;
		delete del;
		size--;
	}
	head = nullptr;

}




#endif
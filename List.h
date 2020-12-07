#pragma once
#include "BitString5.h"
#include <iostream>
#ifndef Source_main_h
#define Source_main_H

class List
{
public:
	List();
	int Getter_size();
	void add_last_element(BitString &obj);
	void show();
	void Delete_last_element();
	void Delete_index(int counter);
	void add_index(BitString &obj,int counter);
	void Delete_List();
	BitString* Search_element(int counter);
	
protected:
	class Node
	{
	public:
		
		Node* prev;
		Node* next;
		BitString* field;
		
		Node(BitString *obj,Node*prev, Node* next = nullptr)
		{
			this->field = obj;
			this->next = next;
			this->prev = prev;

		}
		Node(BitString  *obj)
		{
			this->field = obj;
			this->next=nullptr;
			this->prev = nullptr;
		}
		
	};
	int size;
	Node* head;
};






#endif
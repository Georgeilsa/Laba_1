#include "BitString5.h"
#include "List.h" 
#include <iostream>


List::List()
{
	size = 0;
	head = nullptr;
}

int List::Getter_size()
{
	return size;
}

void List::add_last_element(BitString &obj)
{
	if (head == nullptr)
	{
		head = new Node(&obj);

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
		cur->next = new Node(&obj, cur);

	}
	size++;
}

void List::show()
{
	try
	{
		if (this->head == nullptr) throw "List is empty";

		Node* cur = this->head;
		cur->field->show();
		while (cur->next != nullptr)
		{
			cur = cur->next;
			cur->field->show();

		}
	}
	catch (const char* exception)
	{
		std::cout << "List is empty" << std::endl;
		
	}

	
}

BitString* List::Search_element(int counter)
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


void List::Delete_last_element()
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
	
void List::Delete_index(int counter)
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
			else if (cur->next == nullptr )
			{
				Node* temp = cur;
				cur = cur->prev;
				cur->next = nullptr;
				delete temp;
				break;
			}
			else
			{
				Node* prev=cur->prev;
				Node* next=cur->next;
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
		 if(index!=counter)throw "No element with which index";
		 else { size--; }

		 
	}
	catch (const char* exception)
	{
		std::cout << "No element with which index" << std::endl;
	}

}

void List::add_index(BitString  &obj, int counter)
{
	int index = 0;
	Node* cur = this->head;

	while (cur != nullptr)
	{
		if (counter == index)
		{
			if (cur == head)
			{
				Node* A = new Node(&obj);
				cur->prev = A;
				A->next = cur;
				head = A;
				break;
			}
			else if (cur->next == nullptr)
			{
				Node* A = new Node(&obj, cur);
				cur->next = A;
				break;
			}
			else
			{
				Node* A = new Node(&obj, cur->prev, cur);
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

void List::Delete_List()
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
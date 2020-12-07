#include <iostream>
#include <cmath>
#include "Test.h"
#include "DecString.h"
#include "List.h"
#include <fstream>
#include <string>


bool Test_add_last_element(List Test,BitString& A)
{
	std::cout << "Result of the Test_add_last_element- ";
	
	Test.add_last_element(A);
	return (*Test.Search_element(Test.Getter_size() - 1) == A);
}

bool Test_add_index_element(List Test, BitString& A, int a)
{
	try
	{
		if (a > Test.Getter_size() || a < 0) throw "a bigger than size of list or smaller than zero";
		std::cout << "Result of the Test_add_last_element- ";
		Test.add_index(A, a);
		return (*Test.Search_element(a) == A);
	}
	catch (const char* exception)
	{
		std::cout << "a bigger than size of list or smaller than zero "<< std::endl;
		std::cout << "Result of the Test_add_last_element- ";
		return false;
	}
	
}

bool Test_delete_last_element(List Test)
{
	List B = Test;
	B.Delete_last_element();
	int i = 0;
	while (i < B.Getter_size())
	{
		if (B.Search_element(i) != Test.Search_element(i))
		break;
		i++;
	}
	std::cout << "Result of the Test_delete_last_element- ";
	return(B.Getter_size() + 1 == Test.Getter_size());
}

bool Test_delete_index_element(List Test,int i)
{
	try
	{
		if (i > Test.Getter_size() || i < 0) throw "a bigger than size of list or smaller than zero";
		List B = Test;
		B.Delete_index(i);
		std::cout << "Result of the Test_delete_index_element- ";
		return(B.Getter_size() + 1 == Test.Getter_size());
	}
	catch (const char* exception)
	{
		std::cout << "a bigger than size of list or smaller than zero " << std::endl;
		std::cout << "Result of the Test_add_last_element- ";
		return false;
	}


}

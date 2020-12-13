#include <iostream>
#include <cmath>
#include "Test.h"
#include "DecString.h"
#include "List.h"
#include <fstream>
#include <string>

void Test_int_list()
{
	std::cout << "Test_int_list:" << std::endl;
	List<int>A;
	A.add_last_element(1);
	A.add_last_element(2);
	A.add_last_element(3);
	std::cout << "Create List with 3 int elenemts:" << std::endl;
	A.show();
	std::cout << "Delete elements number 1" << std::endl;
	A.Delete_index(1);
	A.show();
	std::cout << "Add an element '12' to the beginning of the list" << std::endl;
	A.add_index(12, 0);
	A.show();
	std::cout << std::endl;
}


void Test_float_list()
{
	std::cout << "Test_float_list:" << std::endl;
	List<float>A;
	A.add_last_element(1.1);
	A.add_last_element(2.2);
	A.add_last_element(3.3);
	std::cout << "Create List with 3 float elenemts:" << std::endl;
	A.show();
	std::cout << "Delete elements number 1" << std::endl;
	A.Delete_index(1);
	A.show();
	std::cout << "Add an element '12.12' to the beginning of the list" << std::endl;
	A.add_index(12.12, 0);
	A.show();
	std::cout << std::endl;
}


void Test_BitString_list()
{
	std::cout << "Test_BirString_list:" << std::endl;
	List<BitString>A;
	BitString A1(1, 1);
	BitString A2(2, 2);
	BitString A3(3, 3);
	BitString A4(12, 12);
	A.add_last_element(A1);
	A.add_last_element(A2);
	A.add_last_element(A3);
	std::cout << "Create List with 3 BitString elenemts:" << std::endl;
	A.show();
	std::cout << "Delete elements number 1" << std::endl;
	A.Delete_index(1);
	A.show();
	std::cout << "Add an element '12.12' to the beginning of the list" << std::endl;
	A.add_index(A4, 0);
	A.show();
	std::cout << std::endl;
}
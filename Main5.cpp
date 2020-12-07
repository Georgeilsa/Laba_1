#include <iostream>
#include "BitString5.h"
#include "Test.h"
#include "List.h"
#include "DecString.h"
#include "BitString_New_meth.h"
#include <fstream>
#include <time.h>



int main()
{

	long int senior_1;
	unsigned long int junior_1;
	long int senior_2;
	unsigned long int junior_2;
	long int senior_3;
	unsigned long int junior_3;
	char num[] = "528.543";
	char num2[] = "523.422";
	char num3[] = "3702.224";
	char file_name_txt[] = "BitString.txt";
	char file_name_dat[] = "BitString_binary.dat";

	convert_a_numbers_from_char_to_int(num, sizeof(num), &senior_1, &junior_1);
	convert_a_numbers_from_char_to_int(num2, sizeof(num2), &senior_2, &junior_2);
	convert_a_numbers_from_char_to_int(num3, sizeof(num3), &senior_3, &junior_3);

	DecString Test1(senior_1, junior_1, decimal_system(senior_1, junior_1));
	BitString_New_meth Test2(senior_2, junior_2, 29, 11, 2020);
	BitString Test3(senior_3, junior_3);

	List A;

	A.add_last_element(Test1);
	A.add_last_element(Test2);
	A.add_last_element(Test3);
	std::cout << Test_add_last_element(A, Test3) << std::endl;
	std::cout << Test_add_index_element(A, Test3, 1) << std::endl;
	std::cout << Test_delete_last_element(A) << std::endl;
	std::cout << Test_delete_index_element(A, 1) << std::endl;


	std::cout << "Objects which we add to list: " << std::endl;
	std::cout << Test1 << Test2 << Test3 << std::endl << std::endl;
    std::cout << "Realisation of show function" << std::endl;
	A.show();
	

}
	 
	









	


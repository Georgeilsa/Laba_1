#include <iostream>
#include "BitString4.h"
#include "Test.h"
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
	BitString_New_meth Test2(senior_1, junior_1,29,11,2020);
	
	std::cout<<Test_from_char_to_double(Test1)<<std::endl<<std::endl;
	std::cout << test_decimal_system(senior_1, junior_1)<<std::endl<<std::endl;
	std::cout << Test_8bit(Test2)<<std::endl<<std::endl;
	std::cout << Test_16bit(Test2);
	
   
}
#include <iostream>
#include "BitString.h"
#include "Test.h"
#include <fstream>



int main()
{

	long int senior_1;
	unsigned long int junior_1;
	long int senior_2;
	unsigned long int junior_2;
	long int senior_3;
	unsigned long int junior_3;
	char num[] = "52377.235";
	char num2[] = "523.2215";
	char num3[] = "3329.27";
	char file_name_txt[] = "BitString.txt";
	char file_name_dat[]= "BitString_binary.dat";

	convert_a_numbers_from_char_to_int(num, sizeof(num), &senior_1, &junior_1);
	convert_a_numbers_from_char_to_int(num2, sizeof(num2), &senior_2, &junior_2);
	convert_a_numbers_from_char_to_int(num3, sizeof(num3), &senior_3, &junior_3);
	BitString character_1(senior_1, junior_1);
	BitString character_2(senior_2, junior_2);
	BitString character_3(senior_3, junior_3);
	BitString character_4;
	BitString character_5;
	


	std::ofstream fout;
	std::ifstream fin;
	std::ofstream fout_binary;
	std::ifstream fin_binary;
	
	std::cout<<"Result_of the file txt test- "<<Test_txt(fout, character_1, fin, character_4, file_name_txt)<<std::endl;
	std::cout << "Result_of the file binary test- " << Test_binary(fout_binary, character_3, fin_binary, character_5, file_name_dat) << std::endl;
	
	
}
	


	
	
#include <iostream>
#include <cmath>
#include "Test.h"
#include <fstream>

bool Test_txt(std::ofstream& file_name_1, BitString& character_1, std::ifstream& file_name_2, BitString& character_2,char* name)
{
	write_txt(file_name_1,name, character_1);
	read_txt(file_name_2, name,character_2);

	if (character_1 == character_2)return 1;
	else return 0;
}

bool Test_binary(std::ofstream& file_name_1, BitString& character_1, std::ifstream& file_name_2, BitString& character_2, char* name)
{
	write_binary(file_name_1, name, character_1);
    read_binary(file_name_2, name, character_2);
	
	if (character_1 == character_2)return 1;
	else return 0;
}
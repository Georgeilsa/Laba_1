#pragma once
#include "BitString.h"
#ifndef Test_H
#define Test_H

bool Test_txt(std::ofstream& file_name_1, BitString& character_1, std::ifstream& file_name_2, BitString& character_2,char* name);
bool Test_binary(std::ofstream& file_name_1, BitString& character_1, std::ifstream& file_name_2, BitString& character_2,char* name);
#endif
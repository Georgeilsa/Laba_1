#pragma once
#include "BitString4.h"

#ifndef Source_main_h
#define Source_main_H
class DecString:public BitString
{
public:
	DecString();
	DecString(long int senior, unsigned long int junior,char* name);
	DecString(DecString& number_1);
	char* Getter_decimal();
	void Setter_decimal(char* name);
	double from_char_to_double();
	
	friend std::ostream& operator<<(std::ostream& os, DecString& part);
	friend std::istream& operator>>(std::istream& os, DecString& part);
	friend bool Test_from_char_to_double(DecString& Test_obj);
protected:
	char* decimal;
};
char* decimal_system(long int senior, unsigned long int junior);
#endif


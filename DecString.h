#pragma once
#include "BitString5.h"

#ifndef Source_main_h
#define Source_main_H
class DecString :public BitString
{
public:
	DecString();
	DecString(long int senior, unsigned long int junior, char* name);
	DecString(DecString& number_1);
	char* Getter_decimal();
	DecString operator=(const DecString& right);
	void Setter_decimal(char* name);
	double from_char_to_double();
	void show();
	friend std::ostream& operator<<(std::ostream& os, DecString& part);
	friend std::istream& operator>>(std::istream& os, DecString& part);
	
protected:
	char* decimal;
};
char* decimal_system(long int senior, unsigned long int junior);
#endif

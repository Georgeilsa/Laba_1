#pragma once
#include "BitString4.h"
#ifndef Source_main_h
#define Source_main_H

class BitString_New_meth :public BitString
{
public:
	BitString_New_meth();
	BitString_New_meth(long int senior, unsigned long int junior, int day, int month, int year);
	BitString_New_meth(BitString_New_meth& part);
	char* convert_BitString_to_8bit();
	char* convert_BitString_to_16bit();
	void show_BitString_New_meth();
	int Getter_day();
	int Getter_month();
	int Getter_year();
	void Setter_day(int day);
	void Setter_month(int month);
	void Setter_year(int year);
	friend std::ostream& operator<<(std::ostream& os, BitString_New_meth& part);
	friend std::istream& operator >>(std::istream& is, BitString_New_meth& part);
protected:
	int day;
	int month;
	int year;
};
#endif
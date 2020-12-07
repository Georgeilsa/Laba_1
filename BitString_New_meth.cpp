#include "BitString_New_meth.h"
#include "BitString5.h"
#include <iostream>
#include <cmath>



BitString_New_meth::BitString_New_meth()
{
	senior = 0;
	junior = 0;
	day = 0;
	month = 0;
	year = 0;
}

BitString_New_meth::BitString_New_meth(long int senior, unsigned long int junior, int day, int month, int year)
{
	this->senior = senior;
	this->junior = junior;
	this->day = day;
	this->month = month;
	this->year = year;
}

BitString_New_meth::BitString_New_meth(BitString_New_meth& part)
{
	this->senior = part.senior;
	this->junior = part.junior;
	this->day = part.day;
	this->month = part.month;
	this->year = part.year;
}

int  BitString_New_meth::Getter_day()
{
	return day;
}

void BitString_New_meth::Setter_day(int day)
{
	this->day = day;

}

int  BitString_New_meth::Getter_month()
{
	return month;
}

void BitString_New_meth::Setter_month(int month)
{
	this->month = month;

}


int BitString_New_meth::Getter_year()
{
	return year;
}

void BitString_New_meth::Setter_year(int year)
{
	this->year = year;
}


void BitString_New_meth::show_BitString_New_meth()
{
	std::cout << senior << "." << junior << "  " << day << "." << month << "." << year << std::endl;
}


char* BitString_New_meth::convert_BitString_to_8bit()
{
	char* whole_number = new char[129]{ "" };
	int i = 0;
	int f = 0;
	long int elder = senior;
	unsigned long int young = junior;

	while (elder)
	{
		whole_number[size_of_number_8(senior) - i - 1] = (elder) % 8 + '0';
		elder = elder / 8;
		i++;
	}
	whole_number[i] = '.';
	while (young)
	{
		whole_number[i + size_of_number_8(junior) - f] = (young) % 8 + '0';
		young = young / 8;
		f++;
	}
	char* ch = whole_number;
	return ch;
}

char* BitString_New_meth::convert_BitString_to_16bit()
{
	char* whole_number = new char[129]{ "" };
	int i = 0;
	int f = 0;
	long int elder = senior;
	unsigned long int young = junior;

	while (elder)
	{
		if ((elder % 16) < 10)
		{
			whole_number[size_of_number_16(senior) - i - 1] = (elder) % 16 + '0';

		}
		else
		{
			switch (elder % 16)
			{
			case 10:
				whole_number[size_of_number_16(senior) - i - 1] = 'A';
				break;
			case 11:
				whole_number[size_of_number_16(senior) - i - 1] = 'B';
				break;
			case 12:
				whole_number[size_of_number_16(senior) - i - 1] = 'C';
				break;
			case 13:
				whole_number[size_of_number_16(senior) - i - 1] = 'D';
				break;
			case 14:
				whole_number[size_of_number_16(senior) - i - 1] = 'E';
				break;
			case 15:
				whole_number[size_of_number_16(senior) - i - 1] = 'F';
				break;
			}

		}
		elder = elder / 16;
		i++;

	}
	whole_number[i] = '.';
	while (young)
	{
		if ((young % 16) < 10)
		{
			whole_number[i + size_of_number_16(junior) - f] = (young) % 16 + '0';

		}
		else
		{
			switch (young % 16)
			{
			case 10:
				whole_number[i + size_of_number_16(junior) - f] = 'A';
				break;
			case 11:
				whole_number[i + size_of_number_16(junior) - f] = 'B';
				break;
			case 12:
				whole_number[i + size_of_number_16(junior) - f] = 'C';
				break;
			case 13:
				whole_number[i + size_of_number_16(junior) - f] = 'D';
				break;
			case 14:
				whole_number[i + size_of_number_16(junior) - f] = 'E';
				break;
			case 15:
				whole_number[i + size_of_number_16(junior) - f] = 'F';
				break;
			}

		}
		young = young / 16;
		f++;


	}
	char* ch = whole_number;
	return ch;
}

std::ostream& operator<<(std::ostream& os, BitString_New_meth& part)
{
	os << part.senior << "." << part.junior << "  " << part.day <<" "<< part.month <<" "<< part.year << std::endl;
	return os;

}

std::istream& operator >>(std::istream& is, BitString_New_meth& part)
{
	is >> part.senior >> part.junior >> part.day >> part.month >> part.year;

	return is;
}

BitString_New_meth BitString_New_meth::operator=(const BitString_New_meth& right) {
	try
	{

		if (this == &right) throw - 1;
		this->senior = right.senior;
		this->junior = right.junior;
		this->day = right.day;
		this->month = right.month;
		this->year = right.year;
	}
	catch (int b)
	{
		return *this;
	}

	return *this;
}

void BitString_New_meth::show()
{
	std::cout << senior << " " << junior << " " << "  " << day << "." << month << "." << year << std::endl;
}

#include "DecString.h"
#include <iostream>
#include <cmath>


DecString::DecString()
{
	senior = 0;
	junior = 0;
	decimal = new char[strlen(" ") + 1];
}

DecString::DecString(long int senior, unsigned long int junior, char* name)
{
	this->senior = senior;
	this->junior = junior;
	this->decimal = name;
}

char* DecString::Getter_decimal()
{
	return decimal;
}

void DecString::Setter_decimal(char* decimal)
{
	this->decimal = decimal;

}

DecString::DecString(DecString& number_1)
{
	senior = number_1.senior;
	junior = number_1.junior;
	decimal = number_1.decimal;
}

char* decimal_system(long int senior, unsigned long int junior)
{
	char* whole_number = new char[129]{ "" };
	int i = 0;
	int f = 0;
	long int elder = senior;
	unsigned long int young = junior;
	while (elder)
	{
		whole_number[size_of_number(senior) - i - 1] = (elder) % 10 + '0';
		elder = elder / 10;
		i++;
	}
	whole_number[i] = '.';
	while (young)
	{
		whole_number[i + size_of_number(junior) - f] = (young) % 10 + '0';
		young = young / 10;
		f++;
	}
	char* ch = whole_number;
	return ch;
}

double DecString::from_char_to_double()
{
	double character = 0;
	int i = 0;
	char* A = decimal;
	while (decimal[i] != '.')
	{
		i++;
	}

	int f = i;
	while (i != 0)
	{

		character = character + (A[i - 1] - '0') * pow(10, f - i);
		i--;

	}
	while (decimal[f + i] != '\0')
	{
		i++;
	}
	int d = f + i - 1;
	while (f != d)
	{
		character = character + (A[f + 1] - '0') * pow(10, d - (f + i));
		f++;
	}
	return character;
}




std::ostream& operator<<(std::ostream& os, DecString& part)
{
	long int a = part.senior;
	unsigned long int b = part.junior;
	char* s = part.decimal;
	os << a << " " << b << " " << s << std::endl;
	return os;

}

std::istream& operator >>(std::istream& is, DecString& part)
{
	long int a;
	unsigned long int b;

	is >> a >> b >> part.decimal;
	part.senior = a;
	part.junior = b;

	return is;
}

DecString DecString::operator=(const DecString& right) {
	try
	{

		if (this == &right) throw - 1;
		this->senior = right.senior;
		this->junior = right.junior;
		this->decimal = right.decimal;
	}
	catch (int b)
	{
		return *this;
	}

	return *this;
}
void DecString::show()
{
	std::cout << senior << " " << junior << " " << decimal << std::endl;
}
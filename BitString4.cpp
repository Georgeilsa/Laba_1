#include <iostream>
#include <cmath>
#include <fstream>
#include "BitString4.h"

void convert_a_numbers_from_char_to_int(char* number, int size_of_array, long int* senior_1, unsigned long int* junior_1)
{
	(*senior_1) = 0;
	(*junior_1) = 0;
	int number_of_characters_1 = 0;
	int number_of_characters_2 = 0;
	while (number[number_of_characters_1] != '.')
	{
	number_of_characters_1 = number_of_characters_1 + 1;
	}

	number_of_characters_2 = size_of_array - number_of_characters_1 - 2;


	for (int i = 0; i < number_of_characters_1; i++)
	{
		(*senior_1) = (*senior_1) + ((number[number_of_characters_1 - 1 - i] - '0') * pow(10, i));
	}
	for (int i = 0; i < number_of_characters_2; i++)
	{
		(*junior_1) = (*junior_1) + ((number[size_of_array - 2 - i] - '0') * pow(10, i));
	}

}

void convert_a_numbers_from_char_to_BitString(char* number, int size_of_array, BitString& character)
{
	int number_of_characters_1 = 0;
	int number_of_characters_2 = 0;
	while (number[number_of_characters_1] != '.')
	{
		number_of_characters_1 = number_of_characters_1 + 1;
	}

	number_of_characters_2 = size_of_array - number_of_characters_1 - 1;


	for (int i = 0; i < number_of_characters_1; i++)
	{
		(character.senior) = (character.senior) + ((number[number_of_characters_1 - 1 - i] - '0') * pow(10, i));
	}
	for (int i = 0; i < number_of_characters_2; i++)
	{
		(character.junior) = (character.junior) + ((number[size_of_array - 1 - i] - '0') * pow(10, i));
	}
}






char* BitString::operator!()
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
int size_of_number_binary(unsigned long int a)
{
	int i = 0;
	while (a != 0)
	{
		a = a / 2;
		i++;
	}
	return i;
}
int size_of_number(unsigned long int a)
{
	int i = 0;
	while (a != 0)
	{
		a = a / 10;
		i++;
	}
	return i;
}

int size_of_number_8(unsigned long int a)
{
	int i = 0;
	while (a != 0)
	{
		a = a / 8;
		i++;
	}
	return i;
}

int size_of_number_16(unsigned long int a)
{
	int i = 0;
	while (a != 0)
	{
		a = a / 16;
		i++;
	}
	return i;
}

BitString::BitString(long int value_senior, unsigned long int value_junior)
{
	senior = value_senior;
	junior = value_junior;
	count_of_number++;
}
BitString::BitString()
{
	senior = 0;
	junior = 0;
	count_of_number++;

}
BitString::BitString(BitString& number_1)
{
	senior = number_1.senior;
	junior = number_1.junior;
	count_of_number++;
}
void BitString::Setter_senior(long int value_senior)
{
	senior = value_senior;
}
void BitString::Setter_senior_unsigned(unsigned long int value_senior)
{
	senior = value_senior;
}
void BitString::Setter_junior(unsigned long int value_junior)
{
	junior = value_junior;
}
long int BitString::Getter_senior()
{
	return senior;
}

void BitString::show()
{
	std::cout << senior << "." << junior << std::endl;
}
unsigned long int BitString::Getter_junior()
{
	return junior;
}



BitString BitString::operator+(BitString part)
{
	BitString Plus;
	Plus.senior = this->senior + part.senior;
	Plus.junior = this->junior + part.junior;

	return Plus;
}

BitString BitString::operator-(BitString part)
{
	BitString Minus;
	try
	{
		if (this->junior < part.junior) throw - 1;
		Minus.senior = this->senior - part.senior;
		Minus.junior = this->junior - part.junior;
	}
	catch (int v)
	{
		std::cout << "character_1 have to be bigger,than character_2" << std::endl;
	}


	return Minus;

}
BitString BitString::operator&(BitString part)
{
	BitString And;
	And.senior = this->senior & part.senior;
	And.junior = this->junior & part.junior;

	return And;
}

BitString BitString::operator|(BitString part)
{
	BitString Or;
	Or.senior = this->senior | part.senior;
	Or.junior = this->junior | part.junior;

	return Or;
}

BitString BitString::operator^(BitString& part)
{
	BitString Xor;
	Xor.senior = this->senior ^ part.senior;
	Xor.junior = this->junior ^ part.junior;

	return Xor;
}
BitString BitString::operator=(const BitString& right) {
	try
	{

		if (this == &right) throw - 1;
		this->senior = right.senior;
		this->junior = right.junior;
	}
	catch (int b)
	{
		return *this;
	}

	return *this;
}


BitString BitString::operator~()
{
	BitString Transit;
	Transit.senior = ~(this->senior);
	Transit.junior = ~(this->senior);
	return Transit;
}

bool operator==(const BitString& part, const BitString& part_2)
{
	return(part.senior == part_2.senior && part.junior == part_2.junior);
}


BitString::~BitString()
{
	count_of_number--;
}



std::ofstream& operator<<(std::ofstream& os, BitString& part)
{
	long int a;
	unsigned long int b;
	a = part.senior;
	b = part.junior;
	os << a << " " << b;
	return os;

}

std::ostream& operator<<(std::ostream& os, BitString& part)
{
	long int a;
	unsigned long int b;
	a = part.senior;
	b = part.junior;
	os << a << " " << b;
	return os;

}

std::ifstream& operator >>(std::ifstream& is, BitString& part)
{
	long int a;
	unsigned long int b;
	is >> a >> b;
	part.senior = a;
	part.junior = b;
	return is;
}
std::istream& operator >>(std::istream& is, BitString& part)
{
	long int a;
	unsigned long int b;
	is >> a >> b;
	part.senior = a;
	part.junior = b;
	return is;
}

void write_txt(std::ofstream& file_name, char* name, BitString& character)
{

	file_name.open(name);
	try
	{
		if (!file_name.is_open()) { throw ("Write in binary hasn't been complited"); }
		file_name << character;
	}
	catch (const char* exception)
	{
		std::cout << "Error" << std::endl;

	}
	file_name.close();

}

void read_txt(std::ifstream& file_name, char* name, BitString& character)
{
	file_name.open(name);
	try
	{
		if (!file_name.is_open())throw "file doesn't open";
		file_name >> character;
	}
	catch (const char* exception)
	{
		std::cout << "Error" << std::endl;

	}
	file_name.close();

}

void write_binary(std::ofstream& file_name, char* name, BitString& character)
{
	char* A = !character;
	file_name.open(name, std::ofstream::binary);
	try
	{
		if (!file_name.is_open()) { throw ("Write in binary hasn't been complited"); }
		file_name.write((char*)&A, sizeof(A));

	}
	catch (const char* exception)
	{
		std::cout << "Error" << std::endl;

	}
	file_name.close();

}

void read_binary(std::ifstream& file_name, char* name, BitString& character)
{
	char* A;
	file_name.open(name, std::ifstream::binary);
	try
	{
		if (!file_name.is_open())throw "file doesn't open";
		file_name.read((char*)&A, sizeof(A));
		convert_a_numbers_from_char_to_BitString(A, strlen(A), character);
	}
	catch (const char* exception)
	{
		std::cout << "Error" << std::endl;
	}
	file_name.close();

}

double fractional_part_of_the_number(double st)
{
	double ds = floor(st);
	double as = st - ds;
	return as;
}

long int The_integer_part_of_number(char* mas)
{
	int i = 0;
	long int part = 0;
	try
	{

		while (mas[i] != '.') { i++; }
		if (i < 1) throw "Number_of_elements = 0";
		for (int j = 0; i > 0; i--)
		{
			part = part + (mas[i - 1] - '0') * pow(10, j);
			j++;
		}
	}
	catch (const char* exception)
	{
		std::cout << "Number_of_elements = 0" << std::endl;
	}

	return part;
}

unsigned long int fractional_part_of_a_number(char* mas)
{
	int i = 0;
	int f = 0;
	long int part = 0;
	try
	{
		while (mas[i] != '.') { i++; }
		f = i + 1;
		while (mas[f] != '\0') { f++; }
		if (f == 0) throw "Number of elements=0";
		for (int j = 0; (i + 1) < f; i++)
		{
			part = part + (mas[i + 1] - '0') * pow(10, (f - i - 2));
			j++;
		}
	}
	catch (const char* exception)
	{
		std::cout << "Number_of_elements = 0" << std::endl;
	}

	return part;
}


int BitString::count_of_number = 1;
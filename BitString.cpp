#include <iostream>
#include <cmath>
#include "BitString.h"

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


char* BitString::operator!()
{
	char* whole_number = new char[129]{ "" };
	int i = -1;
	int f = 0;
	long int elder = senior;
	unsigned long int young = junior;
	if (senior == 0)
	{
		i++;
		whole_number[i] = 0;
	}
	while (elder > 0)
	{
		i++;
		whole_number[size_of_number_binary(senior) - i - 1] = '0' + elder % 2;
		elder = elder / 2;

	}
	i++;
	whole_number[i] = '.';


	if (junior == 0)
	{
		i++;
		whole_number[i] = '0';
	}
	else
	{
		double s = double(young);
		s = s * pow(10, -size_of_number(young));


		while (s > 0 && f < 15)
		{
			s = s * 2;
			if (s >= 1)
			{
				i++;
				whole_number[i] = '1';
				s -= 1;

			}
			else
			{
				i++;
				whole_number[i] = '0';
			}
			f++;

		}
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

BitString BitString::operator^(BitString &part)
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

int BitString::count_of_number = 1;
#include <iostream>
#include <cmath>
#include "Header1.h"

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


char* BitString::To_String_binary(BitString number)
{
	char* whole_number = new char[129]{ "" };
	int i = -1;
	int f = 0;
	long int elder = number.senior;
	unsigned long int young = number.junior;
	if (senior == 0)
	{
		i++;
		whole_number[i] = 0;
	}
	while (elder > 0)
	{
		i++;
		whole_number[size_of_number_binary(number.senior) - i - 1] = '0' + elder % 2;
		elder = elder / 2;

	}
	i++;
	whole_number[i] = '.';


	if (number.junior == 0)
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
}
void BitString::Setter_senior(long int value_senior)
{
	senior = value_senior;
}
void BitString::Setter_senior_unsigned(unsigned long int value_senior)
{
	senior = value_senior;
}
void BitString::Setter_junior(long int value_junior)
{
	junior = value_junior;
}
long int BitString::Getter_senior()
{
	return senior;
}

unsigned long int BitString::Getter_junior()
{
	return junior;
}

void BitString::Xor(BitString& number_1, BitString& number_2, BitString& number_Xor)
{
	number_Xor.senior = number_1.senior ^ number_2.senior;
	number_Xor.junior = number_1.junior ^ number_2.junior;

}

void BitString::Or(BitString& number_1, BitString& number_2, BitString& number_Or)
{
	number_Or.senior = number_1.senior | number_2.senior;
	number_Or.junior = number_1.junior | number_2.junior;
}

void BitString::And(BitString& number_1, BitString& number_2, BitString& number_And)
{
	number_And.senior = number_1.senior & number_2.senior;
	number_And.junior = number_1.junior & number_2.junior;
}

void BitString::Not(BitString& number_1, BitString& number_Not)
{
	number_Not.senior = ~(number_1.senior);
	number_Not.junior = ~(number_1.junior);
}

BitString::~BitString()
{
	std::cout << "Вызвался деструктор";
}
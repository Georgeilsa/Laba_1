#pragma once
#ifndef Source_H
#define Source_H

class BitString {
public:
	BitString(long int value_senior, unsigned long int value_junior);
	char* To_String_binary(BitString number);
	long int Getter_senior();
	unsigned long int Getter_junior();
	void Setter_senior(long int value_senior);
	void Setter_senior_unsigned(unsigned long int value_senior);
	void Setter_junior(long int value_junior);
	void Or(BitString& number_1, BitString& number_2, BitString& number_Or);
	void Xor(BitString& number_1, BitString& number_2, BitString& number_Xor);
	void And(BitString& number_1, BitString& number_2, BitString& number_And);
	void Not(BitString& number_1, BitString& number_Not);
	~BitString();
private:
	long int senior;
	unsigned long int junior;
	static int Bit ;
};

int size_of_number_binary(unsigned long int a);
int size_of_number(unsigned long int a);
void convert_a_numbers_from_char_to_int(char* number, int size_of_array, long int* senior_1, unsigned long int* junior_1);
bool Test_Xor1(BitString& ñharacter_1, BitString& ñharacter_2, BitString& character_3);
bool Test_Or1(BitString& ñharacter_1, BitString& ñharacter_2, BitString& character_3);
bool Test_And1(BitString& ñharacter_1, BitString& ñharacter_2, BitString& character_3);
bool Test_Not1(BitString& ñharacter_1, BitString& character_3);

#endif
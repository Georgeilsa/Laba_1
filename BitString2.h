#pragma once
#ifndef Source_main_H
#define Source_main_H
class BitString {
public:
	BitString(long int value_senior, unsigned long int value_junior);
	BitString();
	BitString(BitString& number_1);
	char* operator!();
	long int Getter_senior();
	unsigned long int Getter_junior();
	void show();
	void Setter_senior(long int value_senior);
	void Setter_senior_unsigned(unsigned long int value_senior);
	void Setter_junior(unsigned long int value_junior);
	friend void Test_minus(BitString& character_1, BitString& character_2);
	BitString operator+(BitString part);
	BitString operator-(BitString part);
	BitString operator&(BitString part);
	BitString operator|(BitString part);
	BitString operator^(BitString &part);
	BitString operator=(const BitString &right);
	BitString operator~();
	friend bool operator==(const BitString& part,const BitString &part_2);
	~BitString();
	
private:
	long int senior;
	unsigned long int junior;
	static int count_of_number;
	
};

int size_of_number_binary(unsigned long int a);
int size_of_number(unsigned long int a);
void convert_a_numbers_from_char_to_int(char* number, int size_of_array, long int* senior_1, unsigned long int* junior_1);

#endif

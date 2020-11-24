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
	BitString operator+(BitString part);
	BitString operator-(BitString part);
	BitString operator&(BitString part);
	BitString operator|(BitString part);
	BitString operator^(BitString& part);
	BitString operator=(const BitString& right);
	BitString operator~();
	friend std::ofstream& operator<<(std::ofstream& os, BitString& part);
	friend std::ostream& operator<<(std::ostream& os, BitString& part);
	friend std::istream& operator>>(std::istream& os, BitString& part);
	friend std::ifstream& operator>>(std::ifstream& os, BitString& part);
	friend bool operator==(const BitString& part, const BitString& part_2);
	friend void write_txt(std::ofstream& file_name,char* name, BitString& character);
	friend void read_txt(std::ifstream& file_name, char* name, BitString& character);
	friend void write_binary(std::ofstream& file_name, char* name, BitString& character);
	friend void read_binary(std::ifstream& file_name, char* name, BitString& character);
	friend void convert_a_numbers_from_char_to_BitString(char* number, int size_of_array, BitString& character);
	~BitString();

private:
	long int senior;
	unsigned long int junior;
	static int count_of_number;

};

int size_of_number_binary(unsigned long int a);
int size_of_number(unsigned long int a);
void convert_a_numbers_from_char_to_int(char* number, int size_of_array, long int* senior_1, unsigned long int* junior_1);
void file();
#endif
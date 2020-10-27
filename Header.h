#pragma once
#ifndef Source_H
#define Source_H

class BitString {
public:
	inline BitString(long int value_senior, unsigned long int value_junior);
	inline char* To_String_binary(BitString number);
	inline long int Getter_senior();
	inline unsigned long int Getter_junior();
	inline void Setter_senior(long int value_senior);
	inline void Setter_senior_unsigned(unsigned long int value_senior);
	inline void Setter_junior(long int value_junior);
	inline void Or(BitString& number_1, BitString& number_2,BitString& number_Or);
	inline void Xor(BitString& number_1, BitString& number_2,BitString &number_Xor);
	inline void And(BitString& number_1, BitString& number_2,BitString& number_And);
	inline void Not(BitString& number_1,BitString& number_Not);
private:
	long int senior;
	unsigned long int junior;
};

inline int size_of_number_binary(unsigned long int a);
inline int size_of_number(unsigned long int a);
inline void convert_a_numbers_from_char_to_int(char* number, int size_of_array, long int* senior_1, unsigned long int* junior_1);
inline bool Test_Xor(BitString& ñharacter_1, BitString& ñharacter_2, BitString& character_3);
inline bool Test_Or(BitString& ñharacter_1, BitString& ñharacter_2, BitString& character_3);
inline bool Test_And(BitString& ñharacter_1, BitString& ñharacter_2, BitString& character_3);
inline bool Test_Not(BitString& ñharacter_1, BitString& character_3);

#endif

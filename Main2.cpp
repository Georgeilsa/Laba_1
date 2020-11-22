#include <iostream>
#include "BitString.h"
#include "Test.h"

int main()
{

	long int senior_1;
	unsigned long int junior_1;
	long int senior_2;
	unsigned long int junior_2;
	long int senior_3;
	unsigned long int junior_3;
	char num[] = "53.25";
	char num2[] = "53.25";
	char num3[] = "32.21";

	convert_a_numbers_from_char_to_int(num, sizeof(num), &senior_1, &junior_1);
	convert_a_numbers_from_char_to_int(num2, sizeof(num2), &senior_2, &junior_2);
	convert_a_numbers_from_char_to_int(num3, sizeof(num3), &senior_3, &junior_3);
	BitString character_1(senior_1, junior_1);
	BitString character_2(senior_2, junior_2);
	BitString character_3(senior_3, junior_3);
	Test_minus(character_1, character_3);
	Test_equality(character_1, character_2);
	Test_Operations(character_1, character_3);
	std::cout << "character_1 to binary with operator !- " << !character_1 << std::endl;
}

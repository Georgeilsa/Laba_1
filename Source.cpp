#include <iostream>
#include "Source1.cpp"
#include "Test.cpp"


int main()
{

	long int senior_1;
	unsigned long int junior_1;
	long int senior_2;
	unsigned long int junior_2;
	char num[] = "53.5";
	char num2[] = "13.6";

	convert_a_numbers_from_char_to_int(num, sizeof(num), &senior_1, &junior_1);
	convert_a_numbers_from_char_to_int(num2, sizeof(num2), &senior_2, &junior_2);
	BitString character_1(senior_1, junior_1);
	BitString character_2(senior_2, junior_2);
	BitString Test(0,0);
	long int a = 0;
	unsigned long int b = 0;

	std::cout <<"Result of Xor test- "<< Test_Xor(character_1, character_2, Test) << std::endl;

	std::cout << "Result of Or test- " << Test_Or(character_1, character_2, Test) << std::endl;

	std::cout <<"Result of And test- " << Test_And(character_1, character_2, Test) << std::endl;
	
	std::cout << "Result of Not test- " << Test_Not(character_1, Test) << std::endl;

	std::cout<< "Character_1 binary- "<<character_1.To_String_binary(character_1)<<std::endl;

}

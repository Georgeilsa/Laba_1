#include <iostream>
#include <cmath>
#include "Test.h"

void Test_minus(BitString& character_1, BitString& character_2)
{
	try
	{
		std::cout << "Characters,which we use for test" << std::endl;
		character_1.show();
		character_2.show();
		BitString Test;
		BitString Answer(21, 4);
		std::cout << "Minus test" << std::endl;
		std::cout << "if character_1.junior-character_2.junior<0 ,then exepton" << std::endl;
		if (character_1.junior < character_2.junior) throw "test hasn't complated";
		Test = character_1 - character_2;
		Test.show();
		bool b = (Test == Answer);
		std::cout << "Result of the Test- " << b << std::endl << std::endl << std::endl;
	}
	catch (const char* exception)
	{
		std::cout << "Error" << std::endl;
	}
}


void Test_equality(BitString character_1, BitString character_2)
{
	try
	{
		std::cout << "Characters,which we use for test" << std::endl;
		character_1.show();
		character_2.show();
		bool a, b;
		std::cout << "Equality test" << std::endl;
		a = (character_1 == character_2);
		b = (character_1.Getter_senior() == character_2.Getter_senior() && character_1.Getter_junior() == character_2.Getter_junior());
		if (a != b)throw "test hasn't complated";
		else std::cout <<"Result of the test- "<< (a==b) << std::endl << std::endl << std::endl;

	}
	catch (const char* exception)
	{
	std::cout << "Error" << std::endl;
	}
}


void Test_Operations(BitString character_1, BitString character_2)
{
	std::cout << "Characters,which we use for test"<<std::endl;
	character_1.show();
	character_2.show();
	BitString Test;
	Test = character_1 + character_2;
	std::cout << "character_1 + character_2 = ";
	Test.show();
	Test = character_1 ^ character_2;
	std::cout << "character_1 ^ character_2 = ";
	Test.show();
	Test = character_1 & character_2;
	std::cout << "character_1 & character_2 = ";
	Test.show();
	Test = character_1 | character_2;
	std::cout << "character_1 | character_2 = ";
	Test.show();
	

}

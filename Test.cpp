#include <iostream>
#include <cmath>
#include "Header.h"


bool Test_Xor(BitString& �haracter_1, BitString& �haracter_2, BitString& character_3)
{
	�haracter_1.Xor(�haracter_1, �haracter_2, character_3);
	if (character_3.Getter_senior() == 56 && character_3.Getter_junior() == 3){	return true;}
	else { return false; }
}

bool Test_Or(BitString& �haracter_1, BitString& �haracter_2, BitString& character_3)
{
	�haracter_1.Or(�haracter_1, �haracter_2, character_3);
	if (character_3.Getter_senior() == 61 && character_3.Getter_junior() == 7) { return true; }
	else { return false; }
}

bool Test_And(BitString& �haracter_1, BitString& �haracter_2, BitString& character_3)
{
	�haracter_1.And(�haracter_1, �haracter_2, character_3);
	if (character_3.Getter_senior() ==5  && character_3.Getter_junior() == 4) { return true; }
	else { return false; }
}

bool Test_Not(BitString& �haracter_1, BitString& character_3)
{
	�haracter_1.Not(�haracter_1, character_3);
	if (character_3.Getter_senior() == 10 && character_3.Getter_junior() == 2) { return true; }
	else { return false; }
}
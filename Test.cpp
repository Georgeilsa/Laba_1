#include <iostream>
#include <cmath>
#include "Test.h"

bool Test_Xor1(BitString& ñharacter_1, BitString& ñharacter_2, BitString& character_3)
{
	ñharacter_1.Xor(ñharacter_1, ñharacter_2, character_3);
	if (character_3.Getter_senior() == 56 && character_3.Getter_junior() == 3) { return true; }
	else { return false; }
}

bool Test_Or1(BitString& ñharacter_1, BitString& ñharacter_2, BitString& character_3)
{
	ñharacter_1.Or(ñharacter_1, ñharacter_2, character_3);
	if (character_3.Getter_senior() == 61 && character_3.Getter_junior() == 7) { return true; }
	else { return false; }
}

bool Test_And1(BitString& ñharacter_1, BitString& ñharacter_2, BitString& character_3)
{
	ñharacter_1.And(ñharacter_1, ñharacter_2, character_3);
	if (character_3.Getter_senior() == 5 && character_3.Getter_junior() == 4) { return true; }
	else { return false; }
}

bool Test_Not1(BitString& ñharacter_1, BitString& character_3)
{
	ñharacter_1.Not(ñharacter_1, character_3);
	if (character_3.Getter_senior() == 10 && character_3.Getter_junior() == 2) { return true; }
	else { return false; }
}

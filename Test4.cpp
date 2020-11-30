#include <iostream>
#include <cmath>
#include "Test.h"
#include "DecString.h"
#include <fstream>
#include <string>


bool test_decimal_system(long int senior,unsigned long int junior)
{
    std::cout << "Test to decimal system" << std::endl;
    char* Test;
    Test=decimal_system(senior,junior);
    std::cout << "Senior- " << senior << std::endl;
    std::cout << "Junior- " << junior << std::endl;
    std::cout << "Characters in decimal system- " << Test << std::endl;
    std::cout << "Result of the test- ";
    if ((The_integer_part_of_number(Test) == senior) && (fractional_part_of_a_number(Test) == junior)){ return true; }
    else { return false; }
   
}




bool Test_from_char_to_double(DecString& Test_obj)
{
    std::cout << "Test from char to double" << std::endl;
    float dob = Test_obj.from_char_to_double();
    float i, s;
    s = fractional_part_of_the_number(dob);
    std::cout << "Senior- " << Test_obj.senior << std::endl;
    std::cout << "Junior- " << Test_obj.junior << std::endl;
    std::cout << "Double object- " << dob << std::endl;
    std::cout << "Result of the test- ";
    
    float sd = Test_obj.junior * pow(10, -size_of_number(Test_obj.junior));
    
    bool a = (abs(sd-s)<0.0001);
    return a;
   

    
}
bool Test_8bit(BitString_New_meth& Test)
{
    std::cout << "Test 8bit" << std::endl;
    char* character= Test.convert_BitString_to_8bit();
    std::cout <<"Object in 8bit- "<< Test.convert_BitString_to_8bit() << std::endl;
    const char* Test1 = "1020.1037";
    std::cout << "expected value- " << Test1<<std::endl;
    std::cout << "Result of the test- ";
    bool a = (!strcmp(character,Test1));
    return a;
}


bool Test_16bit(BitString_New_meth& Test)
{
    std::cout << "Test 16bit" << std::endl;
    char* character = Test.convert_BitString_to_16bit();
    std::cout << "Object in 16bit- " << Test.convert_BitString_to_16bit() << std::endl;
    const char* Test1 = "210.21F";
    std::cout << "expected value- " << Test1 << std::endl;
    std::cout << "Result of the test- ";
    bool a = (!strcmp(character, Test1));
    return a;
}

#pragma once
#include "BitString5.h"
#include "DecString.h"
#include "BitString_New_meth.h"
#include "List.h"
#ifndef Test_H
#define Test_H

bool Test_add_last_element(List Test, BitString& A);
bool Test_add_index_element(List Test, BitString& A, int a);
bool Test_delete_last_element(List Test);
bool Test_delete_index_element(List Test, int i);
#endif
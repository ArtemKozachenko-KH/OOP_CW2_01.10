#pragma once
#include <iostream>
#include "Student.h"
#include "Passport.h"
using namespace std;

int main()
{
	//1.Aspirant
/*	Aspirant obj1("Nicolay", 19, "ItStep", "Bacalavr", "IT");
	obj1.Print();*/

 //2. Passport
	ForeignPassport obj("Petya", 18, "Man", "Ukraine", 8800545, "18.08.2026", "18.08.2027", "Thailand");
	obj.Print();
}

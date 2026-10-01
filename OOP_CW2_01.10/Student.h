#pragma once
#include <iostream>
using namespace std;

class Student
{
protected:
	string name;
	int age;
	string university;
public:
	Student() {}
	Student(string n, int a, string univ) : name(n), age(a), university(univ) {}
	void Print()
	{
		cout << "\n\tName :" << name << "\n\tAge: " <<age << "\n\tUnviersity: " << university;
	}
};

class Aspirant : public Student
{
	string dissertation;
	string theme;
public:
	Aspirant(string n, int a, string univ, string dis, string tm) :Student(n, a, univ)
	{
		dissertation = dis;
		theme = tm;
	}
	void Print()
	{
		Student::Print();
		cout << "\n\tDissertatioon: " << dissertation << "\n\t Theme: " << theme;
	}
};



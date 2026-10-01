#pragma once
#include <iostream>
using namespace std;

class Passport
{
protected:
	string name;
	int age;
	string state;
	string country;
	int passId;
public:
	Passport() {}
	Passport(string n, int a, string st, string cntr, int pi) :name(n), age(a), state(st), country(cntr), passId(pi) {}
	void Print()
	{
		cout << "\n\tName: " << name
			<< "\n\tAge: " << age
			<< "\n\tState: " << state
			<< "\n\tCountry: " << country
			<< "\n\tPassId: " << passId << endl;
	}
};


class ForeignPassport : public Passport
{
	string dateIssue;
	string dateExpire;
	string visaCountry;
public:
	ForeignPassport() {}
	ForeignPassport(string n, int a, string st, string cntr, int pi, string di, string de, string vc) :Passport(n, a, st, cntr, pi), dateIssue(di), dateExpire(de), visaCountry(vc) {}
	void Print()
	{
		Passport::Print();
		cout<<"\n\t Visa"
			<< "\n\tDateIssue: " << dateIssue
			<< "\n\tDateExpire: " << dateExpire
			<< "\n\tVisaCountry: " << visaCountry << endl;
	}

};
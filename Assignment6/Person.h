#if !defined(PERSON)
#define PERSON
#endif
#include <iostream>

using namespace std;

class Person
{
	char firstName[51];
	char lastName[51];
public:
	Person(char *fn, char *ln)
	{
		strcpy(firstName, fn);
		strcpy(lastName, ln);
	}
	void Print()
	{
		cout << firstName << " " << lastName << endl;
	}
};
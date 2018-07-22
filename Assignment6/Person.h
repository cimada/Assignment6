#if !defined(PERSON)
#define PERSON
#include <iostream>

using namespace std;

class Person
{
public:
	char firstName[51];
	char lastName[51];

	Person();
	
	Person(char *fn, char *ln);

	void Print()
	{
		cout << firstName << " " << lastName << endl;
	}
};
#endif
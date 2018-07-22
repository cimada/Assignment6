#define _CRT_SECURE_NO_WARNINGS
#include "Person.h"

Person::Person()
{
}

Person::Person(char *fn, char *ln)
{
	strcpy(firstName, fn);
	strcpy(lastName, ln);
}

void Print();
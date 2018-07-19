#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
#include <string.h>
//#include <cstring>
#include "main.h"

using namespace std;

//Contact(char *pfn, char *pln, char *pstreet, char *pcity, char *pstate, char *pzip);

int main()
{
	Contact c[5] = 
	{
		Contact("abc", "abc", "abc", "abc", "abc", "abc"),
		Contact("abc", "abc", "abc", "abc", "abc", "abc"),
		Contact("abc", "abc", "abc", "abc", "abc", "abc"),
		Contact("abc", "abc", "abc", "abc", "abc", "abc"),
		Contact("abc", "abc", "abc", "abc", "abc", "abc")
	};

	c[0].printLabel();
	c[1].printLabel();
	c[2].printLabel();
	c[3].printLabel();
	c[4].printLabel();

	system("pause");
	return 0;
}
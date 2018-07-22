#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <string.h>
#include <cstring>
#include "Person.h"
#include "Address.h"
#include "Contact.h"

using namespace std;

int main()
{
	/*Contact c[5]; 
	c[5] =
	{
		Contact("abc", "abc", "abc", "abc", "abc", "abc"),
		Contact("abc", "abc", "abc", "abc", "abc", "abc"),
		Contact("abc", "abc", "abc", "abc", "abc", "abc"),
		Contact("abc", "abc", "abc", "abc", "abc", "abc"),
		Contact("abc", "abc", "abc", "abc", "abc", "abc"),
	};
	*/

	Contact c1 = ("abc", "abc", "abc", "abc", "abc", "abc");

	system("pause");
	return 0;
}
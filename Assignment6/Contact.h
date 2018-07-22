#if !defined(CONTACT)
#define CONTACT
#include <iostream>
#include "Person.h"
#include "Address.h"

using namespace std;

class Contact : Person
{
public:
	Address contactAddress;

	Contact();

	Contact(char *pfn, char *pln, char *pstreet, char *pcity, char *pstate, char *pzip);

	void printLabel()
	{
		Print();
		contactAddress.print();
	}

	::Contact& operator=(string str);
};
#endif
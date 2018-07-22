#if !defined(CONTACT)
#define CONTACT
#endif
#include <iostream>
#include "Person.h"
#include "Address.h"

using namespace std;

class Contact
{
protected:
	//Contact(Person, Address);
public:
	Contact(char *pfn, char *pln, char *pstreet, char *pcity, char *pstate, char *pzip);

	void printLabel();
};
#define _CRT_SECURE_NO_WARNINGS
#include "Contact.h"

Contact::Contact(char pfn[], char pln[], char pstreet[], char pcity[], char pstate[], char pzip[])
{
	strcpy(firstName, pfn);
	strcpy(lastName, pln);
	strcpy(contactAddress.street, pstreet);
	strcpy(contactAddress.city, pcity);
	strcpy(contactAddress.state, pstate);
	strcpy(contactAddress.zip, pzip);
}

::Contact& Contact::operator=(string str)
{
	return *this;
}

Contact::Contact() = default;

void printLabel()
{

}

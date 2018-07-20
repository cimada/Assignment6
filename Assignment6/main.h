// main.h - inline header
#if !defined(MAIN)
#define MAIN
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
#include <string.h>
//#include <cstring>

using namespace std;

class Person
{
protected:
	char firstName[51];
	char lastName[51];
public:
	Person()
	{
		//firstName;
		//lastName;
		
	}
	Person(char* fn, char* ln)
	{
		strcpy(firstName, fn);
		strcpy(lastName, ln);
	}
	void Print()
	{
		if (strlen(firstName) > 0 && strlen(lastName) > 0)
		{
			cout << firstName << " " << lastName << endl;
		}
	}
};

class Address
{
protected:
	char street[51];
	char city[26];
	char state[3];
	char zip[6];
public:
	Address()
	{
		/*street[0] = '\0';
		city[0] = '\0';
		state[0] = '\0';
		zip[0] = '\0';
		*/
	}
	Address(char* pstreet, char* pcity, char* pstate, char* pzip)
	{
		strcpy(street, pstreet);
		strcpy(city, pcity);
		strcpy(state, pstate);
		strcpy(zip, pzip);
	}
	void print()
	{
		if (strlen(street) > 0 && strlen(city) > 0 && strlen(state) > 0 && strlen(zip) > 0)
		{
			cout << street << endl;
			cout << city << ", " << state << " " << zip << endl;
		}
	}
};

class Contact : public Person
{
	//Address contactAddress;
protected:
	char firstName[51];
	char lastName[51];
	char street[51];
	char city[26];
	char state[3];
	char zip[6];
	Address contactAddress;
	int i;
public:
	Contact()
{
		/*firstName[0] = '\0';
		lastName[0] = '\0';
		street[0] = '\0';
		city[0] = '\0';
		state[0] = '\0';
		zip[0] = '\0';
		*/

		strcpy(firstName, "N/A");
}

	Contact(char *pfn, char *pln, char *pstreet, char *pcity, char *pstate, char *pzip)
	{
			strcpy(firstName, pfn);
			strcpy(lastName, pln);
			strcpy(street, pstreet);
			strcpy(city, pcity);
			strcpy(state, pstate);
			strcpy(zip, pzip);
	}
	
	void printLabel()
	{
			Print();
			contactAddress.print();
	}

	//::Contact& operator=(Contact* contact);

	//::Contact& operator=(const char str[50]);

	//Contact(Person(), Address());
};


class BusinessContact : public Contact
{
protected:
	char businessName[51];
public:
	BusinessContact()
	{
		//businessName[0] = '\0';
	}
	BusinessContact(char* pbn, char* pfn, char* pln, char* pstreet, char* pcity, char* pstate, char* pzip)
	{
		strcpy(businessName, pbn);
	}
	void printLabel()
	{
		Contact::printLabel();
	}
};
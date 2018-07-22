#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <string.h>
#include <cstring>

using namespace std;

int const i = 5;

class Person
{
protected:
	char firstName[51];
	char lastName[51];
public:
	Person()
	{
		strcpy(firstName, "N/A");
		strcpy(lastName, "N/A");
	}

	Person(char *fn, char *ln)
	{
			strcpy(this->firstName, fn);
			strcpy(this->lastName, ln);
	}

	void Print()
	{
		/*if (strlen(firstName) > 0 && strlen(lastName) > 0)
		{
			cout << firstName << " " << lastName << endl;
		}
		*/
		cout << firstName << " " << lastName << endl;
	}
};

//---------------------------------------------------------------------------------------------------------------

class Address
{
private:
	char street[51];
	char city[26];
	char state[3];
	char zip[6];
public:
	Address()
	{
		street[0] = '\0';
		city[0] = '\0';
		state[0] = '\0';
		zip[0] = '\0';
		
	}
	Address(char *pstreet, char *pcity, char *pstate, char *pzip)
	{
		strcpy(this->street, pstreet);
		strcpy(this->city, pcity);
		strcpy(this->state, pstate);
		strcpy(this->zip, pzip);
	}
	void print()
	{
		//if (strlen(street) > 0 && strlen(city) > 0 && strlen(state) > 0 && strlen(zip) > 0)
			cout << street << endl;
			cout << city << ", " << state << " " << zip << endl;
	}
};

//---------------------------------------------------------------------------------------------------------------

class Contact : public Person
{
private:
	//char firstName[51];
	//char lastName[51];
	char street[51];
	char city[26];
	char state[3];
	char zip[6];
	//int* cArray;
	//Address contactAddress;

public:
	//int const m = 5;
	Contact()
	{
		firstName[0] = '\0';
		lastName[0] = '\0';
		//street[0] = '\0';
		//city[0] = '\0';
		//state[0] = '\0';
		//zip[0] = '\0';
		

		//strcpy(firstName, "N/A");
	}

	/*
	Contact(int i)
	{
		cArray = new int[i * m];
	}
	*/

	Contact* cArray;
	
	Contact(char *pfn, char *pln, char *pstreet, char *pcity, char *pstate, char *pzip)
	{
		//strcpy(this->firstName, pfn);
		//strcpy(this->lastName, pln);
		Person(firstName, lastName);
		
		strcpy(firstName, pfn);
		strcpy(lastName, pln);

		Address(street, city, state, zip);
		
		strcpy(street, pstreet);
		strcpy(city, pcity);
		strcpy(state, pstate);
		strcpy(zip, pzip);
	}

	void printLabel()
	{
		Print();
		Address:Print();
	}
};

//---------------------------------------------------------------------------------------------------------------

class BusinessContact : public Contact
{
private:
	char businessName[51];
public:
	BusinessContact()
	{
		//businessName[0] = '\0';
	}
	BusinessContact(char* pbn, char* pfn, char* pln, char* pstreet, char* pcity, char* pstate, char* pzip)
	{
		strcpy(this->businessName, pbn);
	}
	void printLabel()
	{
		Contact::printLabel();
	}
};

//------------------------------------------------------------------------------------------------------------------

int cArray;

int main()
{
	/*Person p1, p2, p3, p4, p5;
		
	Person p1 = ("Billy", "Bob");

	p1.Print();
	p[1].Print();
	p[2].Print();
	p[3].Print();
	p[4].Print();
	
	Person p1, p2, p3, p4, p5;

	p1 = ("Billy", "Bob");

	p1.Print();
	
	const int i = 5;

	Contact c0, c1, c2, c3, c4;
	
	c0 = ("Billy", "Bob", "123 Main St", "Layton", "UT", "84041");
	c1 = { "abc", "abc", "abc", "abc", "abc", "abc" };
	c2 = { "abc", "abc", "abc", "abc", "abc", "abc" };
	c3 = { "abc", "abc", "abc", "abc", "abc", "abc" };
	c4 = { "abc", "abc", "abc", "abc", "abc", "abc" };
	
	
	
	
	c0.printLabel();
	c1.printLabel();
	c2.printLabel();
	c3.printLabel();
	c4.printLabel();
	*/
	//Contact c("abc", "abc", "abc", "abc", "abc", "abc");

	Contact c[5];
	

	c[0].cArray = { "Billy", "Bob", "123 Main St", "Layton", "UT", "84041" };
		("abc", "abc", "abc", "abc", "abc", "abc"),
		("abc", "abc", "abc", "abc", "abc", "abc"),
		("abc", "abc", "abc", "abc", "abc", "abc"),
		("abc", "abc", "abc", "abc", "abc", "abc")




	c[0].printLabel();
	c[1].printLabel();
	c[2].printLabel();
	c[3].printLabel();
	c[4].printLabel();
	
	system("pause");
	return 0;
}

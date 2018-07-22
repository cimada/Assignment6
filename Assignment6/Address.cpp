#define _CRT_SECURE_NO_WARNINGS
#include "Address.h"

Address::Address(char *pstreet, char *pcity, char *pstate, char *pzip)
{
	strcpy(street, pstreet);
	strcpy(city, pcity);
	strcpy(state, pstate);
	strcpy(zip, pzip);
}

void print();
#if !defined(ADDRESS)
#define ADDRESS
#endif
#include <iostream>

using namespace std;

class Address
{
private:
	char street[51];
	char city[26];
	char state[3];
	char zip[6];
public:
	Address(char *pstreet, char *pcity, char *pstate, char *pzip)
	{
		strcpy(street, pstreet);
		strcpy(city, pcity);
		strcpy(state, pstate);
		strcpy(zip, pzip);
	}
	void print()
	{
		cout << street << endl;
		cout << city << ", " << state << " " << zip << endl;
	}
};
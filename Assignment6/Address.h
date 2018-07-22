#if !defined(ADDRESS)
#define ADDRESS
#include <iostream>

using namespace std;

class Address
{
public:
	char street[51];
	char city[26];
	char state[3];
	char zip[6];

	Address();

	Address(char *pstreet, char *pcity, char *pstate, char *pzip);

	void print()
	{
		cout << street << endl;
		cout << city << ", " << state << " " << zip << endl;
	}
};
#endif
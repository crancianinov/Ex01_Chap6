
//Ex2_chap6
//
#include <iostream>
#include <cstring>

using namespace std;

//prototypes

int equal(int x, int y);
int equal(double x, double y);
int equal(char a, char b);
int equal(char* a, char* b);


int main()
{
	int iX = 0;
	int iY = 0;
	double dX = 0;
	double dY = 0;
	char* pA;
	char* pB;
	char* pC;

	////Comparacao entre integers
	//cout << "Enter 2 integer to be compared: " << endl;
	//cin >> iX >> iY;
	//cout << "Comparing iX = " << iX << " and iY = " << iY << endl;
	//if (equal(iX, iY))
	//	cout << "iX and iY are the same." << endl;
	//else
	//	cout << "iX and iY are different." << endl;
	
	////Comparacao entre doubles
	//cout << "Enter 2 doubles to be compared: " << endl;
	//cin >> dX >> dY;
	//cout << "Comparing dX = " << dX << " and dY = " << dY << endl;
	//if (equal(dX, dY))
	//	cout << "dX and dY are the same." << endl;
	//else
	//	cout << "dX and dY are different." << endl;

	//Comparacao entre chars
	cout << "Enter 2 chars to be compared: " << endl;
	cin >> pA >> pB;
	cout << "Comparing pA = \"" << pA << "\" and pB = \"" << pB << "\"" << endl;
	if (equal(pA, pB))
		cout << "pA and pB are the same." << endl;
	else
		cout << "pA and pB are different." << endl;


	cout << endl;
	return 0;
}

//Functions
int equal(int x, int y)
{
	if (x == y)
	{
		return 1;
	}
	else
		return 0;
}
int equal(double x, double y)
{
	if (x == y)
	{
		return 1;
	}
	else
		return 0;
}
int equal(char a, char b)
{
	if (a == b)
	{
		return 1;
	}
	else
		return 0;
}
int equal(char* a, char* b)
{
	if (strcmp(a, b) == 0)
	{
		return 1;
	}
	else
		return 0;
}

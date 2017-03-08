#include <iostream>

using namespace std;

int main()
{
	int antalGange = 0;

	cout << "Indtast antal gange: ";
	cin >> antalGange;
	cout << endl;

	for (int i = 0; i < antalGange; i++)
		cout << "Soren er en tisseflute" << endl;
}
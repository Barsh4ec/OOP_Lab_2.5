#include <iostream>
#include <Windows.h>
#include "Fraction.h"

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Fraction a, b;
	cin >> a;
	cin >> b; cout << endl;
	cout << a;
	cout << b;


	if (Less(a, b) == true)
		cout << "����� ����� ����� �� �����" << endl;
	if (NLess(a, b) == true)
		cout << "����� ����� ����� �� �����" << endl;
	if (Great(a, b) == true)
		cout << "����� ����� ����� �� �����" << endl;
	if (NGreat(a, b) == true)
		cout << "����� ����� ����� �� �����" << endl;
	if (Equal(a, b) == true)
		cout << "����� � ����� ����� ����" << endl;
	if (NEqual(a, b) == true)
		cout << "����� � ����� ����� �� ����" << endl;
	Pair c(4,5);
	int t = c.getFirst();
	int tt = c.getSecond();
	cout << t << "," << tt << endl;
	cout << t++ << endl;
    cout << t << "," << tt << endl;
    cout << ++t << endl;
	cout << t << "," << tt << endl;

	return 0;
}
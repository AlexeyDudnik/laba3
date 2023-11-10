#include <iostream>
using namespace std;
#include <stdlib.h>
int main()
{
	double m[10];
	srand(time(NULL));
	for (int i = 0; i < 10; ++i) {
		m[i] = rand() % 99 + 1;
		cout << m[i] << " ";
	}
	cout << endl << "punkt nomer: ";
	int p,a;
	cin >> p;
	switch (p) {
	case 1:
		for (int i = 0; i < 10; ++i) {
			m[i] = m[i] * 2;
			cout << m[i] << " ";
		}
		break;

	case 2:
		cout << "Vvedite chislo na kotoroe umenshite: ";
		cin >> a;
		for (int i = 0; i < 10; ++i) {
			m[i] = m[i] - a;
			cout << m[i] << " ";
		}
		break;
	case 3:
		int k = m[0];
		for (int i = 0; i < 10; ++i) {
			m[i] = m[i] / k;
			cout << m[i]<<" ";
		}
		break;
	}
}
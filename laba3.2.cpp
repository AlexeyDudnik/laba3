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
	int p, a, k1, k2, c = 0, s1, s2;
	double sum = 0,sr = 0;
	cin >> p;
	switch (p) {
	case 1:
		for (int i = 0; i < 10; ++i) {
			sum += m[i];
		}
		cout << sum;
		break;
	case 2:
		for (int i = 0; i < 10; ++i) {
			sum += pow(m[i],2);
		}
		cout << sum;
		break;
	case 3:
		for (int i = 0; i < 6; ++i) {
			sum += m[i];
		}
		cout << sum;
		break;
	case 4:
		cout << "Vvedite interval: ";
		cin >> k1 >> k2;
		if ((k1 <= 0) or (k2 <= 0) or (k1 > 10) or (k2 > 10) or (k2 < k1)) {
			cout << "Otchislen";
			break;
		}
		--k1;
		for (k1; k1 < k2; ++k1) {
			sum += m[k1];
		}
		cout << sum;
		break;
	case 5:
		for (int i = 0; i < 10; ++i) {
			sr += m[i];
			++c;
		}
		sum = sr / c;
		cout << sum;
		break;
	case 6:
		cout << "Vvedite interval: ";
		cin >> s1 >> s2;
		if ((s1 <= 0) or (s2 <= 0) or (s1 > 10) or (s2 > 10) or (s2 < s1)) {
			cout << "Otchislen";
			break;
		}
		--s1;
		for (s1; s1 < s2; ++s1) {
			sr += m[s1];
			++c;
		}
		sum = sr / c;
		cout << sum;
		break;
	}
}
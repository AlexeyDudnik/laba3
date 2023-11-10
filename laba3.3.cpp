#include <iostream>
using namespace std;
#include <stdlib.h>
int main()
{
	double m[20];
	srand(time(NULL));
	for (int i = 0; i < 20; ++i) {
		m[i] = rand() % 99 + 1;
		cout << m[i] << " ";
	}
	cout << endl;
	int a, b, c;
	a = m[0];
	b = m[1];
	c = m[2];
	m[0] = m[17];
	m[1] = m[18];
	m[2] = m[19];
	m[17] = a;
	m[18] = b;
	m[19] = c;
	for (int i = 0; i < 20; ++i) {
		cout << m[i] << " ";
	}
}
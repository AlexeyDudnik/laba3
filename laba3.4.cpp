#include <iostream>
using namespace std;
#include <stdlib.h>
#include <vector>
int main()
{
	vector<int> v3;
	vector<int> v2;
	vector<int> v1;
	srand(time(NULL));
	int k,a,p,c = 0;
	cout << "Vvedite punkt: ";
	cin >> p;
	switch (p) {
	case 1:
		for (int i = 0; i < 10; ++i) {
			k = rand() % 2;
			if (k == 0) {
				a = (rand() % 99 + 1) * (-1);
			}
			else {
				a = (rand() % 99 + 1);
			}
			v1.push_back(a);
			cout << a << " ";
		}
		cout << endl;
		for (int i = 0; i < 10; ++i) {
			if ((c == 0) and (v1[i] < 0)) {
				++c;
			}
			else {
				v2.push_back(v1[i]);
			}
		}
		for (int i = 0; i < 9; ++i) {
			cout << v2[i] << " ";
		}
	case 2:
		for (int i = 0; i < 10; ++i) {
			a = (rand() % 99 + 1);
			v1.push_back(a);
			cout << a << " ";
		}
		cout << endl;
		for (int i = 9; i > -1; --i) {
			if ((c == 0) and (v1[i] % 2 == 0)) {
				++c;
			}
			else {
				v2.push_back(v1[i]);
			}
		}
		for (int i = 8; i > -1; --i) {
			v3.push_back(v2[i]);
		}
		for (int i = 0; i < 9; ++i) {
			cout << v3[i] << " ";
		}
	}
}
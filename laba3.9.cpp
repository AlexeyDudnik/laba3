#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	double a = 0, sum, res;
	string s1;
	getline(cin, s1);
	vector<char> v1(s1.begin(), s1.end());
	for (char f : v1) {
		if ((f == 'a') or (f == 'A')) {
			++a;
		}
	}
	sum = v1.size();
	res = (a * 100) / sum;
	cout << res << "%";
}
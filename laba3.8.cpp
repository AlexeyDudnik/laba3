#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	string s1;
	getline(cin, s1);
	vector<char> v1(s1.begin(), s1.end());
	vector<char> v2;
	for (int i = 0; i < v1.size(); ++i) {
		v2.push_back('*');
	}
	for (int i = 0; i < v1.size(); ++i) {
		v2.push_back(v1[i]);
	}
	for (int i = 0; i < v1.size(); ++i) {
		v2.push_back('*');
	}
	for (char f : v2) {
		cout << f;
	}

}
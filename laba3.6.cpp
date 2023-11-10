#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	string s1,s2;
	getline(cin, s1);
	getline(cin, s2);
	vector<char> v1(s1.begin(), s1.end());
	vector<char> v2(s2.begin(), s2.end());
	if (v1.size() > v2.size()) {
		cout << "True";
	}
	else {
		cout << "False";
	}
}
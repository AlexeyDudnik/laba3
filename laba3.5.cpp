#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	string s1;
	getline(cin, s1);
	vector<char> v1(s1.begin(), s1.end());
	cout << v1.size();
}
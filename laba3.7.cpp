#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	string s1, s2,s3;
	getline(cin, s1);
	getline(cin, s2);
	getline(cin, s3);
	vector<char> v1(s1.begin(), s1.end());
	vector<char> v2(s2.begin(), s2.end());
	vector<char> v3(s3.begin(), s3.end());
	if (v1.size() == max(v1.size(), max(v2.size(), v3.size()))) {
		cout << s1 << " the_longest" << endl;
	}
	if (v2.size() == max(v1.size(), max(v2.size(), v3.size()))) {
		cout << s2 << " the_longest" << endl;
	}
	if (v3.size() == max(v1.size(), max(v2.size(), v3.size()))) {
		cout << s3 << " the_longest" << endl;
	}
	if (v1.size() == min(v1.size(), min(v2.size(), v3.size()))) {
		cout << s1 << " the_shortest" << endl;
	}
	if (v2.size() == min(v1.size(), min(v2.size(), v3.size()))) {
		cout << s2 << " the_shortest" << endl;
	}
	if (v3.size() == min(v1.size(), min(v2.size(), v3.size()))) {
		cout << s3 << " the_shortest" << endl;
	}
}
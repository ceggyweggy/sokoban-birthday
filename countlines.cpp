#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	cout << count(s.begin(), s.end(), ',')+1;
}
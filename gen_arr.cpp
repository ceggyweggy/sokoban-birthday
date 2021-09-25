#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	string output = "";
	bool first_time = true;
	unsigned long longest_length = 0;
	while (1) {
		string s;
		getline(cin, s);
		if (s == "done") break;
		if (!first_time) output += ", ";
		else first_time = false;
		output += "{";
		for (int i=0; i<s.length(); i++) {
			if (int(s[i]) > 64 && int(s[i]) < 91) s[i] = '`';
			else if (s[i] == '0') s[i] = '`';
			output += '\'';
			output += s[i];
			output += '\'';
			if (i != s.length()-1) output += ',';
		} 
		longest_length = max(longest_length, s.length());
		for (int i=0; i<longest_length - s.length(); i++) {
			output += ", ' '";
		}
		output += "}";
	} cout << output;
}
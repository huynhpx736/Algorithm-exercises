#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
string CatTen(string s) {
	
	string ten = "";
	for (int i = s.length()-1; i>=0; i--) {
		if (s[i] == ' ') {
			ten = s.substr(i + 1);
			break;
		}
	}
	if (s[0] != ' ') ten += s[0];
	for (int i = 0; i < s.length()-1; i++) {
		if (s[i] == ' ' && s[i + 1] != ' ') {
			ten += s[i+1];
		}
	}
	ten.erase(ten.length() - 1, 1);
	ten += "@ptit.edu.vn";
	std::transform(ten.begin(), ten.end(), ten.begin(), ::tolower);

	return ten;
}

int main() {
	string s;
	getline(cin, s);
	cout << CatTen(s);
	return 0;
}

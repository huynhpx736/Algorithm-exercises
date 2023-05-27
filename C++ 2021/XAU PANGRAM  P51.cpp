#include<iostream>
#include<string>
using namespace std;
int xauPangram(string s, int x) {
	if (s.length() < 26) return 0;
	int dem = 0;
	for (char i = 'a'; i <= 'z'; i++) {
		for (int j = 0; j < s.length(); j++) {
			if (i == s[j]) {
				dem++;
				break;
			}
		}
	}
	if (26 - dem <= x) return 1;
	return 0;
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		string s;
		cin.ignore();
		getline(cin, s);
		int x;
		cin >> x;
		cout << xauPangram(s, x) << endl;
	}
	return 0;
}

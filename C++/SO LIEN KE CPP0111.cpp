//SO LIEN KE CPP0111
#include<iostream>
#include<string>
using namespace std;
int soLienKe(string s) {
	if (s.length() == 1) return 0;
	for (int i = 0; i < s.length() - 1; i++) {
		if (s[i + 1] - s[i] != 1 && s[i + 1] - s[i] != -1) return 0;
	}
	return 1;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		string x;
		cin >> x;
		if (soLienKe(x)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}

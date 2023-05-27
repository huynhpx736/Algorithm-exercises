#include<iostream>
using namespace std;
void check(string s) {
	int demA = 0;
	int demB = 0;
	int demC = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'A') demA++;
		if (s[i] == 'B') demB++;
		if (s[i] == 'C') demC++;

	}
	if (demA + demC == demB) cout << "YES" << endl;
	else cout << "NO" << endl;
	return;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		check(s);
	}
	return 0;
}

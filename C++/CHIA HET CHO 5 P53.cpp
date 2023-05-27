//CHIA HET CHO 5
#include<iostream>
#include<string>
using namespace std;
void SoChiaHetCho_5(string s) {
	int l = s.length();
	int du = 0;
	for (int i = l-1; i >= 0 ; i--) {
		if (s[i] == '1') {
			if ((l - i - 1) % 4 == 0) du += 1;
			if ((l - i - 1) % 4 == 1) du += 2;
			if ((l - i - 1) % 4 == 2) du += 4;
			if ((l - i - 1) % 4 == 3) du += 3;
		}
		//cout << "du = " << du << endl;
	}
	if (du % 5 == 0) cout << "Yes" << endl;
	else cout << "No" << endl;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		string s;
		cin >> s;
		SoChiaHetCho_5(s);
	}
	return 0;
}


// SO THUAN NGHICH (KIEU NHAP CHUOI)
#include<iostream>
#include<string>
using namespace std;
void SoThuanNghich(string s) {
	int l = s.length();
	for (int i = 0; i <= l / 2 + 1; i++) {
		if (s[i] != s[l - 1 - i]) {
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		string s;
		cin >> s;
		SoThuanNghich(s);
	}
}

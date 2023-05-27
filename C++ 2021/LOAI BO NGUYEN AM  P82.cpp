//LOAI BO NGUYEN AM  P82
#include<iostream>
#include<string>
using namespace std;
void inThuongChuoi(string& s) {
	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= 65 && s[i] <= 90) s[i] += 32;
	}
}
void xuatNguyenAm(string s) {
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y') {
			cout << '.' << s[i];
		}
	}
}
int main() {
	string s;
	cin >> s;
	inThuongChuoi(s);
	xuatNguyenAm(s);
	return 0;
}

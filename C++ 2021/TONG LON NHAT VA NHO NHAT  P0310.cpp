#include<iostream>
#include<algorithm>
//TONG LON NHAT VA NHO NHAT CPP0310
#include<string>
using namespace std;
//Ham chuyen kieu string thanh long long
long long stringToLongLong(string s) {
	long long so = 0;
	for (int i = 0; i < s.length(); i++) {
		so = so * 10 + (s[i] - '0');
	}
	return so;
}
// chuyen chuoi thanh so roo cong
// tong lon nhat khi thay 5 trong chuoi thanh '6'
long long tongLonNhat(string a, string b) {
	for (int i = 0; i < a.length(); i++) {
		if (a[i] == '5') a.replace(i, 1, "6");
	}
	for (int i = 0; i < b.length(); i++) {
		if (b[i] == '5') b.replace(i, 1, "6");
	}
	long long tong = 0;
	tong = tong + stringToLongLong(a) + stringToLongLong(b);
	return tong;
}
//tong nho nhat khi thay tat ca 6 trong chuoi thanh 5
long long tongNhoNhat(string a, string b) {
	for (int i = 0; i < a.length(); i++) {
		if (a[i] == '6') a.replace(i, 1, "5");
	}
	for (int i = 0; i < b.length(); i++) {
		if (b[i] == '6') b.replace(i, 1, "5");
	}
	long long tong = 0;
	tong = tong + stringToLongLong(a) + stringToLongLong(b);
	return tong;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		string a, b;
		cin >> a >> b;
		cout << tongNhoNhat(a, b) << " " << tongLonNhat(a, b) << endl;
	}
	return 0;
}

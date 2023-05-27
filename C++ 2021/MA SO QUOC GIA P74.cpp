#include<iostream>
#include<string>
using namespace std;
void chuanHoaMaQuocGia(string s) {
	if (s.find("084") != string::npos) {
		s.replace(s.find("084"), 3, "");
	}
	cout << s << endl;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		string s;
		cin >> s;
		chuanHoaMaQuocGia(s);
	}
	return 0;
}

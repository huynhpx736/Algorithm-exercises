//DAU CUOI GIONG NHAU
#include<iostream>
#include<string>
using namespace std;
void inKiTuKhongLap(string s) {
	int l = s.length();
	for (int i = 0; i < l; i++) {
		int dem = 0;
		for (int j = 0; j < l; j++) {
			if (s[i] == s[j]) dem++;
			if (dem > 1) break;
			if (j == l - 1 && dem == 1) cout << s[i];
		}
	}
	cout << endl;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		string s;
		cin >> s;
		inKiTuKhongLap(s);
	}
	return 0;
}

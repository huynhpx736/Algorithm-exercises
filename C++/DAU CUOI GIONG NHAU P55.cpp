//DAU CUOI GIONG NHAU
#include<iostream>
#include<string>
using namespace std;
int main() {
	int test;
	cin >> test;
	while (test--) {
		string s;
		cin >> s;
		int dem = 0;
		int l = s.length();
		for (int i = 0; i < l; i++) {
			for (int j = i; j < l; j++) {
				if (s[i] == s[j]) dem++;
			}
		}
		cout << dem << endl;
	}
	return 0;
}

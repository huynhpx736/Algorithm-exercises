//NHIEU THU 2
#include<iostream>
#include<string>
using namespace std;
void caiNit(string s) {
	int l = s.length();
	string a = "";
	a += s[0];
	int dem0 = 1;
	for (int j = 0; s[j + 1] == s[j]; j++) {
		dem0++;
	}
	int b[100];//dem so lan cua phan tu tuong ung trong mang a;
	b[0] = dem0;
	int aDem = 0;
	for (int i = 1; i <= l; i++) {
		if (s[i] != s[i - 1]) {
			aDem++;
			a += s[i];
			int soLan = 1;
			for (int j = i; j < l && s[j + 1] == s[j]; j++) {
				soLan++;
			}
			b[aDem] = soLan;
		}

	}
	int max = 0;
	for (int i = 0; i <= aDem; i++) {
		if (b[i] > max) max = b[i];
	}
	int max2 = 0;
	int viTri = 0;
	for (int i = 0; i <= aDem; i++) {
		if (b[i] < max && b[i] >= max2) {
			max2 = b[i];
			viTri = i;
		}
	}
	if (max2 == 0 || aDem == 0) {
		cout << "-1";
	}
	else {
		cout << a[viTri] << " ";
		cout << b[viTri];
	}
}
int main() {
	string s;
	cin >> s;
	caiNit(s);
	return 0;
}


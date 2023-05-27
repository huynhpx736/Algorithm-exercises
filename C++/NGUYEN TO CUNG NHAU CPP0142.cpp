// NGUYEN TO CUNG NHAU CPP0142
#include<iostream>
#include<cmath>
using namespace std;
int soNguyenTo(int n) {
	if (n < 2) return 0;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}
int UCLN(int a, int b) {
	if (a % b == 0) return b;
	else return UCLN(b, a % b);
}
int nguyenToCungNhau(int a, int b) {
	if (UCLN(a, b) == 1) return 1;
	return 0;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		int x;
		cin >> x;
		int dem = 0;
		for (int i = 1; i <= x; i++) {
			if (nguyenToCungNhau(x, i)) dem++;
		}
		if (soNguyenTo(dem)) cout << "1" << endl;
		else cout << 0 << endl;
	}
	return 0;
}

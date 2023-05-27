#include<iostream>
#include<cmath>
using namespace std;
int SNT(int n) {
	if (n < 2) return 0;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}
int baUocSo(int n) {
	/*double canThuc = sqrt(n);
	int canNguyen = sqrt(n);
	if (canNguyen == canThuc && SNT(canNguyen)) return 1;
	return 0;*/
	double can = sqrt(n);
	if (can == int(can) && SNT(can)) return 1;
	return 0;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			if (baUocSo(i)) cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}


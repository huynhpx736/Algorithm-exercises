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
int tongChuSo(int n) {
	int tong = 0;
	while (n > 0) {
		tong += n % 10;
		n /= 10;
	}
	return tong;
}
void kiemTraSmith(int n) {
	if (soNguyenTo(n)) {
		cout << "NO";  return;
	}
	int tongChuSoUoc = 0;
	int tongChuSoCuaN = tongChuSo(n);
	for (int i = 2; i <= n; i++) {
		if (n % i == 0) {
			tongChuSoUoc += tongChuSo(i);
			n /= i;
			if (soNguyenTo(n)) {
				tongChuSoUoc += tongChuSo(n);
				break;
			}
			i--;
		}
	}
	if (tongChuSoUoc == tongChuSoCuaN) cout << "YES";
	else cout << "NO";
	return;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n; cin >> n;
		kiemTraSmith(n);
		cout << endl;
	}

	return 0;
}

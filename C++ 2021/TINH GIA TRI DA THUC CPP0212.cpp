//TINH GIA TRI DA THUC CPP0212
#include<iostream>
#include<cmath>
const long long m = 1e9 + 7;
using namespace std;
void nhapMangMotChieu(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
// VI SO SO LON THI HAM POW SE TINH SO DU BI SAI NEN TAO HAM RIENG DE TINH SO DU CUA MOI SO NHO SAU DO CONG DAN VAO
long long luyThua(long long a, long long b) {
	long long tich = 1;
	for (long long i = 1; i <= b; i++) {
		tich *= a;
		tich %= m;
	}
	return tich;
}

long long tinhDaThuc(int* a, int n, int x) {
	long long tong = 0;
	for (int i = 0; i < n; i++) {
		tong += a[i] * luyThua(x, n - i - 1);
		tong = tong % m;
	}
	return tong;
}


int main() {
	int test;
	cin >> test;
	while (test--) {
		long long n, x;
		cin >> n >> x;
		int* a;
		a = new int[n];
		nhapMangMotChieu(a, n);
		cout << tinhDaThuc(a, n, x) % m << endl;
		delete[]a;
	}
	return 0;
}


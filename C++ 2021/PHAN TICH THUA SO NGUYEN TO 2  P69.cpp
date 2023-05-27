#include<iostream>
#include<cmath>
using namespace std;
int SNT(long long n) {
	if (n < 2) return 0;
	for (long long i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}
void PTTSNT(long long n) {
	if (SNT(n)) {
		cout << n << " " << 1;
		return;
	}
	int a[100];
	int m = -1;
		for (int i = 2; i <= n; i++) {
			if ((n % i == 0)) {
				m++;
				a[m] = i;
				n = n / i;
				if (SNT(n)) {
					m++;
					a[m] = n;
					break;
				}
					i--;
			}
		}
	int b[100];
	for (int i = 0; i < 100; i++) { b[i] = 1; }
	for (int i = 0; i <= m; i++) {
		int dem = 1;
		if (b[i]) {
			b[i] = 0;
			for (int j = i + 1; j <= m; j++) {
				if (a[i] == a[j]) {
					dem++;
					b[j] = 0;
				}
			}
			cout << a[i] << " " << dem << endl;
		}
	}
}
int main() {
		long long n;
		cin >> n;
		PTTSNT(n);
	return 0;
}

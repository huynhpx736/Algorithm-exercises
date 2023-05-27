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
void inUocNhoNhat(int n) {
	if (n == 1) {
		cout << 1 << endl;
		return;
	}
	cout << 1 << " ";
	for (int i = 2; i <= n; i++) {
		if (soNguyenTo(i)) {
			cout << i << " ";
		}
		else	for (int j = 2; j <= i; j++) {
			if (i % j == 0) {
				cout << j << " ";
				break;
			}

		}
	}
	cout << endl;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		inUocNhoNhat(n);
	}
	return 0;
}

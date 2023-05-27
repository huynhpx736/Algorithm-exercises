#include<iostream>
using namespace std;
long long result(long long n, long long k) {
	long long tong = 0;
	for (int i = 1; i <= n; i++) {
		tong += i % k;
	}
	if (tong == k) return 1;
	return 0;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		long long n, k;
		cin >> n >> k;
		cout << result(n, k) << endl;
	}
	return 0;
}

#include<iostream>
using namespace std;
long long GCD(long long a, long long b) {
	if (a % b != 0) return GCD(b, a % b);
	else return b;
}
long long LCM(long long a, long long b) {
	return (a * b) / GCD(a, b);
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		long long a;
		cin >> a;
		long long BCNN = 1;
		for (long long i = 1; i <= a; i++) {
			BCNN = LCM(i, BCNN);
		}
		cout << BCNN << endl;
	}
	return 0;
}

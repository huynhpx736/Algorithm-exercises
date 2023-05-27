#include<iostream>
using namespace std;
long long result(long long a, long long b, long long c) {
	long long m = 1;
	for (long long i = 1; i <= b; i++) {
		m = m * a % c;
	}
	return m ;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		long long x, y, p;
		cin >> x >> y >> p;
		cout << result(x, y, p) << endl;
	}
	return 0;
}

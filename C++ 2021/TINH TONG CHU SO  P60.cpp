#include<iostream>
using namespace std;
int rutGon(long long n) {
	if (n < 10) return n;
	long long dem = 0;
	while (n > 0) {
		dem += n % 10;
		n /= 10;

	}
	return rutGon(dem);
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		long long n;
		cin >> n;
		cout << rutGon(n) << endl;
	}
	return 0;
}

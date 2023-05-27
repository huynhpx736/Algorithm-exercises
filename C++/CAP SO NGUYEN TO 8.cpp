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
void capSoNT(int n) {
	for (int i = 2; i <= n / 2 + 1; i++) {
		if (SNT(i) && SNT(n - i)) {
			cout << i << " " << n - i;
			break;
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
		capSoNT(n);
	}
	return 0;
}

#include<iostream>
#include<cmath>
using namespace std;
int ktSNT(int n) {
	if (n < 2) return 0;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}
void uocNT(int n) {
	for (int i = 1; i <= n; i++) {
		if (ktSNT(i)) cout << i << " ";
	}
	cout << endl;
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		uocNT(n);
	}
	return 0;
}

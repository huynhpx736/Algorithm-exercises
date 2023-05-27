#include<iostream>
using namespace std;
int main() {
	long long f[100];
	f[0] = 0;
	f[1] = 1;
	for (long long i = 2; i <= 99; i++) {
		f[i] = f[i - 2] + f[i - 1];
	}
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		cout << f[n] << endl;
	}
	return 0;
}

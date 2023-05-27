#include<iostream>
using namespace std;
const long long m = 1e9 + 7;
//typedef unsigned long long u;
int main() {
	long long f[1000];
	f[0] = 0;
	f[1] = 1;
	for (int i = 2; i < 1000; i++) {
		f[i] = f[i - 1]%m + f[i - 2]%m;
		if (f[i]>m) f[i]=f[i]%m;
	}
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		cout << f[n]%m;
		cout << endl;
	}
	return 0;
}

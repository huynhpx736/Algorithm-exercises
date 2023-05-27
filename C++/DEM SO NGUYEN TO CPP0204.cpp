//DEM SO NGUYEN TO CPP0204
#include<iostream>
#include<cmath>
using namespace std;
int SNT(long long n) {
	if (n < 2) return 0;
	for (long long i = 2; i*i <=n; i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		long long l,r;
		cin >> l>>r;
		int dem = 0;
		for (long long i = l; i <= r; i++) {
			if (SNT(i)) dem++;
		}
		cout << dem <<  endl;
	}
	return 0;
}


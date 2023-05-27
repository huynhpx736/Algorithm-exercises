#include<iostream>
#include<cmath>
using namespace std;
typedef unsigned long long u;
int SNT(u n){
	if (n < 2) return 0;
	for (long long i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		u n;
		cin >> n;
		int dem = 0;
		for (long long i = 1; i <=sqrt(n) ; i++) {
			if (SNT(i)) dem++;
		}
		cout << dem << endl;
	}
}

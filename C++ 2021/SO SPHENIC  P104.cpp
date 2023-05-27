#include<iostream>
#include<cmath>
using namespace std;
int SNT(long long n) {
	if (n < 2) return 0;
	for (long long i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}
int soSphenic(long long n) {
	if (SNT(n)) return 0;
	int dem = 0;
	int a[100];
	a[0] = -1;
	for (long long i = 2; i <= n; i++) {
		if (n % i == 0) {
			if (i == a[dem]) return 0;
			else  {
				dem++;
				a[dem] = i;
			}	
			if (dem > 3) return 0;
		
			n /= i;
			i--;
		}
	}
	if (dem == 3) return 1;
	return 0;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		long long n;
		cin >> n;
		cout << soSphenic(n) << endl;
	}
	return 0;
}

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
int USNTk(int n, int k) {//k la vi tri uoc so nguyen to vi du 9=3*3 thi k=2 thi return 3
	if (SNT(n)) {
		if (k == 1) return n;
		else return -1;
	}
	int dem = 0;
	for (int i = 2; i <= n; i++) {
		if (n % i == 0) {
			dem++;
			if (dem == k) return i;
			n /= i;
			i--;
		}
	}
	if (dem < k) return -1;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		int n, k;
		cin >> n>>k;
		cout << USNTk(n,k) << endl;
	}
	return 0;
}

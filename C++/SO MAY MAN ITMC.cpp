#include<iostream>
#include<cmath>
using namespace std;

int soNguyenTo(int n) {
	if (n < 2) return 0;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}

int soMayMan(int n) {
	int demUocNT = 0;
	for (long long i = 2; i <= n; i++) {
		if (n % i == 0 && soNguyenTo(i)) {
			demUocNT++;
			if (demUocNT > 3) return 0;
		}
	}
	if (demUocNT == 3) return 1;
	return 0;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int dem = 0;
		for (int i = 0;dem<n; i++) {
			if (soMayMan(i)) dem++;
			if (dem == n) {
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}

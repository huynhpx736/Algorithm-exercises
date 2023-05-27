#include<iostream>	
#include<cmath>
using namespace std;
void nhapMang(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void PhanTuDauTienLapLai(int* a, int n) {
	for (int i = 1; i < n; i++) {
		for (int j = i - 1; j >= 0; j--) {
			if (a[j] == a[i]) {
				cout << a[i] << endl;
				return;
			}
		}
	}
	cout << -1 << endl;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		int* a;
		int n;
		cin >> n;
		a = new int[n];
		nhapMang(a, n);
		PhanTuDauTienLapLai(a, n);
		delete[]a;
	}
	return 0;
}



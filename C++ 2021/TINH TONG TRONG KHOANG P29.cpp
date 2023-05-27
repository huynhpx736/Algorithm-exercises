#include<iostream>
using namespace std;
void nhapMangmotChieu(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void tongDoan(int* a, int x, int y) {
	int tong = 0;
	for (int i = x - 1; i <= y - 1; i++) {
		tong += a[i];
	}
	cout << tong << endl;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		int* a;
		int n, q;
		cin >> n >> q;
		a = new int[n];
		nhapMangmotChieu(a, n);
		while (q--) {
			int x, y;
			cin >> x >> y;
			tongDoan(a, x, y);
		}
	}
	return 0;
}





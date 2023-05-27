#include<iostream>
using namespace std;
void nhapMangmotChieu(int* a, int n, int& max) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] > max) max = a[i];
	}
}
void timSoNhoNhatChuaXuatHien(int* a, int n, int max) {
	for (int i = 1; i < max; i++) {
		for (int j = 0; j < n; j++) {
			if (i == a[j]) break;
			if (j == n - 1 && i != a[j]) {
				cout << i << endl;
				return;
			}
		}
	}
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		int* a;
		a = new int[n-1];
		int max = -10000000;
		nhapMangmotChieu(a, n-1, max);
		timSoNhoNhatChuaXuatHien(a, n-1, max);
	}
	return 0;
}





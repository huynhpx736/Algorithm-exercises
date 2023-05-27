#include<iostream>
#include<algorithm>
using namespace std;
void nhapMangMotChieu(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void xuatMangMotChieu(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i];
	}
}
void bienDoiDaySo(int* a, int n) {
	if (n == 1) {
		cout << a[0] << endl; return;
	}
	cout << a[0] * a[1] << " ";
	for (int i = 1; i < n - 1; i++) {
		cout << a[i - 1] * a[i + 1] << " ";
	}
	cout << a[n - 1] * a[n - 2];
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		int* a;
		a = new int[n];
		nhapMangMotChieu(a, n);
		bienDoiDaySo(a, n);
		cout << endl;
		delete[]a;
	}
	return 0;
}


#include<iostream>
#include<algorithm>
using namespace std;
void nhapMang(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void xuatMangConFiboLon(int* a, int n, int* f) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 20; j++) {
			if (a[i] == f[j]) {
				cout << a[i] << " ";
				break;
			}
		}
	}
}
int main() {
	int f[20];
	f[0] = 0;
	f[1] = 1;
	for (int i = 2; i < 20; i++) {
		f[i] = f[i - 1] + f[i - 2];
	}
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		int* a;
		a = new int[n];
		nhapMang(a, n);
		xuatMangConFiboLon(a, n, f);
		cout << endl;
		delete[]a;
	}
	return 0;
}


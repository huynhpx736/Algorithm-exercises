#include<iostream>	
#include<cmath>
using namespace std;
void nhapMang(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void demSoLanXuatHien(int* a, int n, int x) {
	int dem = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == x) dem++;
	}
	if (dem > 0) cout << dem;
	else cout << -1;
	cout << endl;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		int* a;
		int n, x;
		cin >> n >> x;
		a = new int[n];
		nhapMang(a, n);
		demSoLanXuatHien(a, n, x);
		delete[]a;
	}
	return 0;
}



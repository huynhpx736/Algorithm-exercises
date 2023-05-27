#include<iostream>
#include<string>
using namespace std;
void nhapMang(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
int timKiem(int* a, int n, int x) {
	for (int i = 0; i < n; i++) {
		if (a[i] == x) return 1;
	}
	return -1;
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
		cout << timKiem(a, n, x) << endl;
	}
	return 0;
}


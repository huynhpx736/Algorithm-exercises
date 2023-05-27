#include<iostream>
using namespace std;
void nhapMangmotChieu(int *a, int n) {
	int max = -1000;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] > max) max = a[i];
	}
	cout << max << endl;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		int* a;
		a = new int[n];
		nhapMangmotChieu(a, n);
	}
	return 0;
}





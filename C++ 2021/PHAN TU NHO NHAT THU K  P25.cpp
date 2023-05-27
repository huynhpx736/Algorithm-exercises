#include<iostream>
using namespace std;
void nhapMangmotChieu(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void nhoNhatThuK(int* a, int size,int k) {
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	cout << a[k - 1] << endl;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		int n, k;
		cin >> n >> k;
		int* a;
		a = new int[n];
		nhapMangmotChieu(a, n);
		nhoNhatThuK(a, n, k);
	}
	return 0;
}





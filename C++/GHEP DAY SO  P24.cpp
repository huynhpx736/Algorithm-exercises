#include<iostream>
using namespace std;
void nhapMangHaiChieu(int** a, int n, int k, int* c) {
	int dem = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			cin >> a[i][j];
			c[dem] = a[i][j];
			dem++;
		}
	}
}
void sapXepMangMotChieu(int* a, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
void xuatMangMotChieu(int* a, long long size) {
	for (int i = 0; i < size; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		int** a;
		int n, k;
		cin >> n >> k;
		a = new int* [n];
		for (int i = 0; i < n; i++) {
			a[i] = new int[k];
		}
		int* c;
		long long sizeC = n * k;
		c = new int[sizeC];
		nhapMangHaiChieu(a, n, k, c);
		sapXepMangMotChieu(c, sizeC);
		xuatMangMotChieu(c, sizeC);
	}
	return 0;
}





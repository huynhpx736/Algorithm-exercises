#include<iostream>
using namespace std;
void nhapMangmotChieu(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void xuatMangmotChieu(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}
void sapXepTang(int* a, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				int tem = a[i];
				a[i] = a[j];
				a[j] = tem;
			}
		}
	}
}
void tronMangMotChieu(int* a, int* b, int n, int m) {
	int* c;
	c = new int[m + n];
	for (int i = 0; i < n; i++) {
		c[i] = a[i];
	}
	for (int i = n; i < m + n; i++) {
		c[i] = b[i - n];
	}
	sapXepTang(c, m + n);
	xuatMangmotChieu(c, m + n);
	delete[]c;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		int* a, * b;
		int n, m;
		cin >> n >> m;
		a = new int[n];
		b = new int[n];
		nhapMangmotChieu(a, n);
		nhapMangmotChieu(b, m);
		tronMangMotChieu(a, b, n, m);
		delete[]a;
		delete[]b;
	}
	return 0;
}






#include<iostream>
using namespace std;
void nhapMangmotChieu(int* a, int *b, int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
}

void xuatMangmotChieu(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cout<< a[i]<<" ";
	}
	cout << endl;
}
void sapXepGiam(int *a, int n){
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] < a[j]) {
				int tem = a[i];
				a[i] = a[j];
				a[j] = tem;
			}
		}
	}
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
void tronMangMotChieu(int* a, int* b, int n) {
	int* c;
	c = new int[n];
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) c[i] = a[i/2];
		else c[i] = b[(i-1)/2];
	}
	xuatMangmotChieu(c, n);
	delete[]c;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		int* a, *b;
		int n;
		cin >> n;
		a = new int[n];
		b = new int[n];
		nhapMangmotChieu(a, b, n);
		
		sapXepGiam(a, n);
		sapXepTang(b, n);
		//xuatMangmotChieu(a, n);
		//xuatMangmotChieu(b, n);
		tronMangMotChieu(a, b, n);
		delete[]a;
		delete[]b;
	}
	return 0;
}





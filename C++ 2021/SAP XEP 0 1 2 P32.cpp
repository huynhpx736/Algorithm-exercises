#include<iostream>
using namespace std;
void nhapMangmotChieu(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void xuatMangmotChieu(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cout<< a[i]<<" ";
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

int main() {
	int test;
	cin >> test;
	while (test--) {
		int* a;
		int n;
		cin >> n;
		a = new int[n];
		nhapMangmotChieu(a, n);
		sapXepTang(a, n);
		xuatMangmotChieu(a, n);
		delete[]a;
	}
	return 0;
}





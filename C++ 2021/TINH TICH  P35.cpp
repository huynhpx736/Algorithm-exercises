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
long long Max(int* a, int n) {
	long long max = -100000000;
	for (int i = 0; i < n; i++) {
		if (a[i] > max) max = a[i];
	}
	return max;
}
long long Min(int* a, int n) {
	long long min = 100000000;
	for (int i = 0; i < n; i++) {
		if (a[i] < min) min = a[i];
	}
	return min;
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
		cout << Max(a, n)* Min(b, m) << endl;
		delete[]a;
		delete[]b;
	}

	return 0;
}





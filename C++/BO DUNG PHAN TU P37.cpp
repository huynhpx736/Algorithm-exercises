#include<iostream>
using namespace std;
void nhapMangTimMinMax(int* a, int n, int& max, int& min) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] > max) max = a[i];
		if (a[i] < min) min = a[i];
	}
}
void xuatMang(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

void timSoConThieu(int* a, int n, int max, int min) {
	int dem = 0;
	for (int i = min; i <= max; i++) {
		for (int j = 0; j < n; j++) {
			if (i == a[j]) break;
			if (j == n - 1 && i != a[j]) dem++;
		}
	}
	cout << dem << endl;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		int n = 0;
		cin >> n;
		int* a;
		a = new int[n];
		int min = 10000000;
		int max = 0;
		nhapMangTimMinMax(a, n, max, min);
		timSoConThieu(a, n, max, min);
	}
	return 0;
}

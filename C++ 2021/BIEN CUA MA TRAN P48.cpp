#include<iostream>	
#include<cmath>
using namespace std;
void nhapMang(int **a, int n) {
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
}
void inBienMaTran(int** a, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 || i == n - 1 || j == 0 || j == n - 1) cout << a[i][j] << " ";
			else cout << "  ";
		}
		cout << endl;
	}
	//cout << endl;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		int** a;
		int n;
		cin >> n;
		a = new int*[n];
		for (int i = 0; i < n; i++) {
			a[i] = new int[n];
		}
		nhapMang(a, n);
		inBienMaTran(a, n);
		for (int i = 0; i < n; i++) {
			delete[]a[i];
		}
		delete []a;
	}
	return 0;
}



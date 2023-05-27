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
void inMaTranHinhConRan(int** a, int n) {
	
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < n; j++) {
				cout << a[i][j] << " ";
			}
		}
		else for (int j = n - 1; j >= 0; j--) {
			cout << a[i][j]<<" ";
		}
	}
	// CO THE THAY BANG DOAN CODE SAU(ko khac may)
	/*for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i % 2 == 0) cout << a[i][j] << " ";
			else cout << a[i][n - j - 1] << " ";
			}
	}*/
cout << endl;
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
		inMaTranHinhConRan(a, n);
		for (int i = 0; i < n; i++) {
			delete[]a[i];
		}
		delete []a;
	}
	return 0;
}



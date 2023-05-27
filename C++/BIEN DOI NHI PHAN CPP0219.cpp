// BIEN DOI NHI PHAN CPP0219
// idea: tao mot mang khac giong mang ban dau
// kiem tra neu phan tu trong mang vua tao =1 thi cho tat ca phan tu trong hang va cot do trong mang a=1
#include<iostream>	
using namespace std;
void nhapMang(int** a, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
}

void xuatMang(int** a, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
void bienDoiHangVaCotNhiPhan(int** a, int n, int m, int i, int j) {
	//bien doi hang
	for (int k = 0; k < m; k++) {
		a[i][k] = 1;
	}
	
	//bien doi cot
	for (int k = 0; k < n; k++) {
		a[k][j] = 1;
	}
}

void biendDoiNhiPhan(int** a, int n, int m) {
	// khoi tao mang b
	int **b = new int* [n];
	for (int i = 0; i < n; i++) {
		b[i] = new int[m];
	}
	// gan cac gia tri trong a cho b
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			b[i][j] = a[i][j];
		}
	}
	// kiem tra neu vi tri phan tu trong b =1 thi chuyen doi nhi phan trong a
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (b[i][j] == 1)
			{
				bienDoiHangVaCotNhiPhan(a, n, m, i, j);
			}
		}
	}
	// giai phong mang b
	for (int i = 0; i < n; i++) {
		delete[]b[i];
	}
	delete[]b;
	xuatMang(a, n, m);
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		int** a;
		int n, m;
		cin >> n >> m;
		a = new int* [n];
		for (int i = 0; i < n; i++) {
			a[i] = new int[m];
		}
		nhapMang(a, n, m);
		biendDoiNhiPhan(a, n, m);
		for (int i = 0; i < n; i++) {
			delete[]a[i];
		}
		delete[]a;
	}
	return 0;
}



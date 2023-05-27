#include<iostream>		
using namespace std;
void nhapMang(int* a, int n, int &min) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] < min) min = a[i];
	}
}
void timKiemMin2(int* a, int n, int min) {
	int min2 = 10000000;
	for (int i = 0; i < n; i++) {
		if (a[i] < min2 && a[i] > min)	min2 = a[i];
	}
	if (min2 == 10000000) cout << -1;
	else cout << min<<" "<<min2;
	cout << endl;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		int min=10000000;
		int* a;
		int n;
		cin >> n;
		a = new int[n];
		nhapMang(a, n,min);
		timKiemMin2(a, n, min);
	}
	return 0;
}


// CACH 2 SAP XEP MANG
/*
#include<iostream>		
using namespace std;
void nhapMang(int* &a, int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void sapXep(int *a, int n){
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if (a[i] > a[j]) {
				int tem = a[i];
				a[i] = a[j];
				a[j] = tem;
			}
		}
	}
}
void timKiemMin2(int* a, int n) {
	int min = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] > a[0]) {
			cout << min << " " << a[i]<<endl;
			return;
		}
	}
	cout<< -1<<endl;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		int* a;
		int n;
		cin >> n;
		a = new int[n];
		nhapMang(a, n);
		sapXep(a, n);	
		timKiemMin2(a, n);
		delete[]a;
	}
	return 0;
}
*/




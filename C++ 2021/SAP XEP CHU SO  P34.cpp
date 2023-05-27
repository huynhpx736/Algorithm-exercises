#include<iostream>	
#include<vector>
using namespace std;
void nhapMang(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void inChuSo(int* a, int n) {
	vector<int >b;
	for (int i = 0; i < n; i++) {
		int tem = a[i];
		while (tem > 0) {
			int sc = tem % 10;
			b.push_back(sc);
			tem /= 10;		
		}
	}
	for (int i = 0; i <= 9; i++) {
		for (int j = 0; j < b.size(); j++) {
			if (i == b[j]) {
				cout << i << " ";
				break;
			}
		}
	}
	cout << endl;
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
		inChuSo(a, n);
		delete[]a;
	}
	return 0;
}



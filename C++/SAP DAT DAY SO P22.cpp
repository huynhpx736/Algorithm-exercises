#include<iostream>
using namespace std;
void sapDatDaySo(long long a[],int n) {
	int b[100000];
	for (int i = 0; i < n; i++) {
		b[i]=-1;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[j] == i) {
				b[i] = i;
				break;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << b[i]<<" ";
	}
	cout << endl;
}
int main() {
	short test;
	cin >> test;
	while (test--) {
		int n;
		long long a[100000];
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sapDatDaySo(a, n);
	}
	return 0;
}

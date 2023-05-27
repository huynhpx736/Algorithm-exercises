#include<iostream>
using namespace std;
int main() {
	int test; cin >> test;
	while (test--) {
		int n, d;
		cin >> n >> d;
		int soVong = d % n;
		int a[1000000];
		for (int i = 0; i < n; i++) {
			cin>>a[i];
		}
		for (int i = soVong; i < n; i++) {
			cout << a[i] << " ";
		}
		for (int i = 0; i < soVong; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}

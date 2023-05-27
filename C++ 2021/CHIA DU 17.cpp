#include<iostream>
#include<cmath>
using namespace std;
int timX(int a, int m) {
	for (int i = 0; i <= m - 1; i++) {
		if ((a*i) % m == 1) return i;
	}
	return -1;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		int a, m;
		cin >> a>> m;
		cout << timX(a,m)<< endl;
	}
	return 0;
}

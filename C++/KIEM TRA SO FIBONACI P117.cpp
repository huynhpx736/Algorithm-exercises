#include<iostream>
using namespace std;
typedef unsigned long long u;
int fibonaci(u n) {
	if (n == 0 || n == 1 || n == 2) return 1;
	u f0 = 0, f1 = 1;
	u fn=f0+f1;
	while (fn < n) {
		f0 = f1;
		f1 = fn;
		fn = f0 + f1;
	}
	if (fn == n) return 1;
	return 0;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		u n;
		cin >> n;
		if (fibonaci(n)) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
	return 0;
}

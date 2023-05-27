#include<iostream>
using namespace std;
long long GCD(long long a, long long b) {
	if (a % b != 0) return GCD(b, a % b);
	else return b;
}
long long LCM(long long a, long long b) {
	return (a * b) / GCD(a, b);
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		int a, b;
		cin >> a >> b;
		cout << LCM(a, b) << " " << GCD(a, b) << endl;
	}
	return 0;
}

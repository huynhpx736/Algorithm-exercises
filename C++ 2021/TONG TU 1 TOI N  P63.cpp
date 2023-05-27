#include<iostream>
using namespace std;
long long tong(long long n) {
	return (n * (n + 1)) / 2;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		long long n;
		cin >> n;
		cout << tong(n) << endl;
	}
	return 0;
}

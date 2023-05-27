#include<iostream>
using namespace std;
void soMayMan(long long n) {
	if (n % 100 == 86) {
		cout << 1 << endl;
		return;
	}
	cout << 0 << endl;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		long long n;
		cin >> n;
		soMayMan(n);
	}
	return 0;
}

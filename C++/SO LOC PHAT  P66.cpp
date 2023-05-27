//SO LOC PHAT
#include<iostream>
#include<string>
using namespace std;
void soLocPhat(long long n) {
	while (n > 0) {
		if (n % 10 != 0 && n % 10 != 6 && n % 10 != 8) {
			cout << "NO" << endl;
			return;
		}
		n /= 10;
	}
	cout << "YES" << endl;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		long long n;
		cin >> n;
		soLocPhat(n);
	}
	return 0;
}

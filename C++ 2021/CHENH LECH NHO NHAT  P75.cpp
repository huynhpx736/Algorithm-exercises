/*#include<iostream>
#include<cmath>
using namespace std;
void nhapMang(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void chenhLechNhoNhat(int* a, int n) {
	int min = 100000000;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (abs(a[i] - a[j]) < min) min = abs(a[i] - a[j]);
		}
	}
	cout << min << endl;
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
		chenhLechNhoNhat(a, n);
	}
	return 0;
}
*/
// CACH PHIA TREN CHAY QUA LAU
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int test;
	cin >> test;
	while (test--) {
		vector<int>a;
		int n = 0;
		cin >> n;
		int x;
		for (int i = 0; i < n; i++) {
			cin >> x;
			a.push_back(x);
		}
		sort(a.begin(), a.end());
		int min = 10000000;
		for (int i = 1; i < n; i++) {
			if (a[i] - a[i - 1] < min) min = a[i] - a[i - 1];
		}
		cout << min << endl;
	}
	return 0;
}


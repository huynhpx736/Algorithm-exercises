#include<iostream>
using namespace std;
int main() {
	int test;
	cin >> test;
		while (test--) {
			int x;
			cin >> x;
			int a[100];
			int m = -1;
			while (x != 1) {
				for (int i = 2; i <= x; i++) {
					if ((x % i == 0)) {
						m++;
						a[m] = i;
						x = x / i;
						i--;
					}
				}
			}

			int b[100];
			for (int i = 0; i < 100; i++) { b[i] = 1; }
			for (int i = 0; i <= m; i++) {
				int dem = 1;
				if (b[i]) {
					b[i] = 0;
					for (int j = i + 1; j <= m; j++) {
						if (a[i] == a[j]) {
							dem++;
							b[j] = 0;
						}
					}
					cout << a[i] << " " << dem << " ";
				}
			}
			cout << endl;
		}
	return 0;
}

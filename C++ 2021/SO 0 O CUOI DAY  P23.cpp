#include<iostream> 
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n, dem = 0; cin >> n; long long a[100000];
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
			if (a[i] != 0)
				cout << a[i] << " ";
			else dem++;
		} 
		for (int i = 1; i <= dem; i++) cout << "0" << " "; cout << endl;
	}
	return 0;
}


/*#include<iostream>
using namespace std;
void sapXep(int a[],int n) {
	int b[10000];
	int dem = 0;
	for (int i = 0; i < n; i++) {
		 b[i] =0;
	}
	
	for (int i = 0; i < n; i++) {
		if (a[i] != 0) {
			b[dem] = a[i];
			dem++;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << b[i]<<" ";
	}
	cout << endl;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		int a[10000];
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sapXep(a, n);
	}
	return 0;
}*/


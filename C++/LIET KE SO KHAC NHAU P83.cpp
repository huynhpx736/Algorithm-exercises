//LIET KE SO KHAC NHAU  P83
#include<iostream>
#include<string>
using namespace std;
void lietKe(int* a, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	int b[100];
	int dem = 0;
	b[0] = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] != b[dem]) {
			dem++;
			b[dem] = a[i];
		}
	}
	
	for (int i = 0; i <= dem; i++) {
		cout << b[i]<<" ";
	}
}

int main() {
	int n;
	int *a;
	cin >> n;
	a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	lietKe(a, n);
	delete[]a;
	return 0;

}

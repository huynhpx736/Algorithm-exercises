//CP0119 SO UOC CHIA HET CHO 2
#include<iostream>
#include<cmath>
using namespace std;
int demUocChiaHetCho2(long long n) {
	int i = 1;
	int dem = 0;
	while (i <= n / i) 
	{
		if (n % i == 0) {
			if (i % 2 == 0) dem++;
			if (n / i % 2 == 0) dem++;
			if (n / i == i && i % 2 == 0) dem--;
		}
		i++;
	}
	return dem;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		int x;
		cin >> x;
		cout << demUocChiaHetCho2(x) << endl;
	}
	return 0;
}

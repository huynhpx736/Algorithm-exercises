//CHIA HET CHO A VA B P107
#include<iostream>
#include<string>
using namespace std;
void chiaHet(int a, int b, int c, int d) {
	int dem = 0;
	for (int i = a; i <= b; i++) {
		if (i % c == 0) dem++;
		if (i % d == 0) dem++;
		if (i % c == 0 && i % d == 0) dem--;
	}
	cout << dem;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		chiaHet(a, b, c, d);
		cout << endl;
	}

	return 0;

}

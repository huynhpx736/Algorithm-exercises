#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double Distance(double a, double b, double c, double d) {
	return sqrt((c - a) * (c - a) + (d - b) * (d - b));
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		double a, b, c, d;
		cin >> a >> b >> c >> d;
		cout << setprecision(4) << fixed << Distance(a, b, c, d);
		cout << endl;
	}
	return 0;
}

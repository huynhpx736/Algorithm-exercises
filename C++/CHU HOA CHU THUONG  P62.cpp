#include<iostream>
#include<vector>
using namespace std;
void chuyenDoiHoaThuong(char s) {
	if (s >= 65 && s <= 90) s += 32;
	else if (s >= 97 && s <= 132) s -= 32;
	cout << s << endl;
}
int main() {
	int test;
	cin >> test;
	//fflush(stdin);
	while (test--) {
		char s;
		cin >> s;
		chuyenDoiHoaThuong(s);
	}
	return 0;
}

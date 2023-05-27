//CHAM DIEM TRAC NGHIEM P70
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	char de101[15] = { 'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D' };
	char de102[15] = { 'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B' };
	int test;
	cin >> test;
	while (test--) {
		string s;
		cin >> s;
		char baiLam[15];
		double diem = 0;
		for (int i = 0; i < 15; i++) {
			cin >> baiLam[i];
		}
		if (s == "101") {
			for (int i = 0; i < 15; i++) {
				if (baiLam[i] == de101[i]) diem += (10 * 1.0) / 15; //neu dap an trung voi bai lam thi cong diem cho cau do
				//cout << "diem hien tai la: " << diem << endl;
			}
		}
		if (s == "102") {
			for (int i = 0; i < 15; i++) {
				if (baiLam[i] == de102[i]) diem += (10 * 1.0) / 15;
			}
		}
		cout << fixed << setprecision(2) << diem << endl;
	}
	return 0;
}

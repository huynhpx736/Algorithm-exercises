// TINH TONG CAC SO TRONG XAU  CPP0334
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
long long tinhTongCacSoTrongXau(string s) {
	long long tong = 0;
	// 48 => 57 ung voi 0=>9
	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= 48 && s[i] <= 57) {
			string tem = "";
			int demBuocNhay = 0;
				for (int j = i; s[j] >= 48 && s[j] <= 57; j++) {
					tem += s[j];
					demBuocNhay++;
			}
				//ham stoll chuyen kiet string ve kieu long long
				tong += stoll(tem);
				// nhay buoc qua cac phan tu trong xau da duoc duyet
				i += demBuocNhay;
		}
	}
	return tong;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		string s;
		cin >> s;
		cout << tinhTongCacSoTrongXau(s) << endl;
	}
	return 0;

}

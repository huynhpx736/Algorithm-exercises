//CHIA HET CHO 11
#include<iostream>
#include<string>
using namespace std;
void SoChiaHetCho_11(string s) {
	int tongLe = 0;
	int tongChan = 0;
	int l = s.length();
	for (int i = 0; i < l; i++) {
		if (i % 2 == 0) tongChan += (s[i] - '0');
		else tongLe += (s[i] - '0');
	}
	int hieuChanLe = abs(tongChan - tongLe);
	//cout << tongChan << " " << tongLe << endl;
	if (hieuChanLe % 11 == 0) cout << 1 << endl;
	else cout << 0 << endl;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		string s;
		cin >> s;
		SoChiaHetCho_11(s);
	}
}

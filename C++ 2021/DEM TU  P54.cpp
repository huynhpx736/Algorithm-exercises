#include<iostream>
#include<string>
using namespace std;
void demSoTuTrongChuoi(string s) { 
	int dem = 0;
	if (s.length() == 0) {
		cout << 0 << endl;
		return;
	}
	if (s[0] != ' '&&s[0]!='\t'&&s[0]!='\n') dem++;
	for (int i = 1; i < s.length(); i++) {
		if ((s[i - 1] == ' ' ||s[i-1]=='\t') && s[i] != ' '&&s[i]!='\t') dem++;
	}
	cout << dem<<endl;
}

int main() {
	int test;
	cin >> test;
	cin.ignore();
	while (test--) {
		string s;
		getline(cin, s);
		demSoTuTrongChuoi(s);
	}
	return 0;
}

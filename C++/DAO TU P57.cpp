//DAO TU
#include<iostream>
#include<string>
#include<vector>
//#include<conio.h>
using namespace std;
void daoChuoi(string s) {
	vector<string> a;
	for (int i = 0; i <= s.length(); i++) {
		string tem = "";
		if ((i==0&&s[i]!=' ') || (s[i - 1] == ' ' && s[i] != ' ')) {
			for (int j = i; s[j] != 32 && s[j] != NULL; j++) tem += s[j];
		}
		//cout << "tem la: " << tem << endl;
		if (tem!="") a.push_back(tem);
	}
	for (int i = a.size() - 1; i >= 0; i--) {
		cout << a[i]<<" ";
	}
	cout << endl;
}
int main() {
	int test;
	cin >> test;
	getchar();
	while (test--) {
		string s;
		getline(cin, s);
		daoChuoi(s);
	}
	return 0;
}

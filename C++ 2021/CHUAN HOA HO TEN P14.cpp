#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
string CatTen(string s) {
	string ten = "";
	for (int i = s.length()-1; i>=0; i--) {
		if (s[i] == ' ') {
			ten = s.substr(i + 1);
			break;
		}
	}
	std::transform(ten.begin(), ten.end(), ten.begin(), ::toupper);
	return ten;
}
void vietHoa(char &a) {
	if (a >= 'a' && a <= 'z') a -= 32;
}
void vietThuong(char& a) {
	if (a >= 'A' && a <= 'Z') a += 32;
}
void vietHoaChuCaiDau(string &s) {
	vietHoa(s[0]);
	for (int i = 1; i < s.length(); i++) {
		if (s[i - 1] == ' ' && s[i] != ' ') vietHoa(s[i]);
		else vietThuong(s[i]);
	}
}
int main() {
	string s;
	getline(cin, s);
	string chuanHoa = "";
	string tam = "";
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ') { 
			chuanHoa += tam;	
			if (s[i+1]!=' ') chuanHoa += " ";
			tam = "";
		}
		else tam += s[i];
	}
	vietHoaChuCaiDau(chuanHoa);
	chuanHoa.insert(chuanHoa.length() - 1, 1, ',');
	
	cout << chuanHoa << CatTen(s);

	return 0;
}

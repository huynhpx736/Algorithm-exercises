
#include<iostream> 
#include<string>
using namespace std; 
int main() {
	string str1, str2;
	getline(cin, str1);
	getline(cin, str2);
	if (str1.find(str2) != string::npos) {
		str1.replace(str1.find(str2), str2.length(), "");
		cout << str1 << endl;
	}
	return 0;
}

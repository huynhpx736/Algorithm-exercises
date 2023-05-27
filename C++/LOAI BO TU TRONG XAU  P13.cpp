#include<iostream>
#include<string>
using namespace std;
void deleteInString(string s, string t) {
	string thay="";
	int l1 = s.length();
	int l2 = t.length();
	for (int i = 0; i < l1; i++) {
		if (s[i] == t[0]) {
			int dem = 1;
			for (int j = i; j < l2 + i; j++) {
				if (s[j] == t[dem]) dem++;
			}
			if (dem == l2&&s[i+l2] == ' ') {
				i += l2-1;
			}
			else thay += s[i];
		}
		else thay += s[i];
	}
	cout << thay;
}
int main() {
	string s, t;
	getline(cin, s);
	getline(cin, t);
	deleteInString(s, t);
	return 0;
}
//#include<bits/stdc++.h> 
//#include<iostream>
//#include<string>
//using namespace std; 
//int main() {
//	string str1, str2; 
//	getline (cin,str1); 
//	getline(cin, str2); 
//	while ((str1.find(str2) != string::npos)){
//			str1.replace(str1.find(str2), str2.length(), "");
//		}
//	cout << str1 << endl;
//	return 0;
//}

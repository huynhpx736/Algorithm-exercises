#include<iostream> 
#include<string>
using namespace std;
int maHoa(string s) { 
	int a = s[0]; 
	int count = 1; 
	for (int i = 0; i < s.length(); i++) { 
		if (s[i] == s[i + 1]) count++;
		else { 
			cout<<s[i]<<count; 
			count = 1; 
		} 
	} 
	return 0;
} 
int main() {
	int a; 
	cin>>a; 
	cin.ignore();
	while (a--) { 
		string a; 
		getline(cin,a); 
		maHoa(a); 
		cout<<endl; 
	} 
	return 0;
}

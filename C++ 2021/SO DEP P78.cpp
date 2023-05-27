#include<iostream> 
#include<string> 
using namespace std;
int main() {
	int k; 
	cin >> k;
	while (k--) {
		string s;
		cin >> s;
		int i, dem = 0, dem1 = 0;
		for (i = 0; i < s.length() - 1; i++) {
			if (s[i] % 2 != 0) dem++;
			if (s[i] != s[s.length() - 1 - i]) dem1++;
		}
		if (dem == 0 && dem1 == 0)
			cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}

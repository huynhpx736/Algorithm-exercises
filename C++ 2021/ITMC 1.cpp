#include<iostream>
#include<string>
using namespace std;
bool ketQua(string s) {
	int l = s.length();
	for (int i = 0; i < l / 2 + 1; i++) {
		if (s[i] != s[l - 1 - i]) {
			return 0;
		}
	}
	return 1;
}
int main() {
	string s;
	getline(cin, s);
	if (ketQua(s)) cout << "YES";
	else cout << "NO";
	return 0;
}

#include<iostream>
#include<cmath>
using namespace std;
int SNT(int n) {
	if (n < 2) return 0;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}
int baUocSo(int n) {
	double can = sqrt(n);
	if (can == int(can) && SNT(can)) return 1;
	return 0;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			if (baUocSo(i)) cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}

/*#include <iostream>
using namespace std;
int r = 0;
int main() {
    int m, n;
    cin >> m ;
    n = m;
    int mt[20][20];
    int k = 0;
    int i = 0, j = 0;
    int l = 0, t = 0, r = n, b = m;
    int flag = 1;

    while (k != m * n) {
        mt[i][j] = ++k;
        if (flag == 1) {
            if (j != r - 1) j++;
            else {
                flag = 2;
                i++;
                r--;
            }
        }
        else if (flag == 2) {
            if (i != b - 1) i++;
            else {
                flag = 3;
                j--;
                b--;
            }
        }
        else if (flag == 3) {
            if (j != l) j--;
            else {
                flag = 4;
                i--;
                l++;
            }
        }
        else {
            if (i != t + 1) i--;
            else {
                flag = 1;
                j++;
                i = ++t;
            }
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
           cout << mt[i][j] << " ";
           cout << endl;
    }
   // system("pause");
    return 0;
}*/





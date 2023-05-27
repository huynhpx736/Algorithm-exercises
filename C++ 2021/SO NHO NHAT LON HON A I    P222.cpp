#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;
int main() {
	int t,n,tg;
	cin >> t;
	while (t--) {
		cin >> n;
		vector <int> P;
		set <int> S;
		map<int, int> M;
		int maxA = -10000000;
		for (int i = 0; i < n; i++) {
			cin >> tg;
			maxA = max(maxA, tg);
			P.push_back(tg);
			S.insert(tg);
		}
		for (int x : P) {
			set<int>::iterator it;
			if (x != maxA) {
				it = S.find(x);
				++it;
				M.insert(pair<int, int>(x, *it));
			}
		}
		for (int x : P) if (x == maxA) cout << "_ "; else cout << M[x] << ' ';
		cout << endl;
	}
	
	return 0;
}


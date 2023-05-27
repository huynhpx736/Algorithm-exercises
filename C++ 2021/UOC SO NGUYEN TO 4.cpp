//cach cua minh da chay dc
#include<iostream>
#include<cmath>
using namespace std;
int SNT(long long n) {
	if (n < 2) return 0;
	for (long long i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return 0;
	} 
	return 1;
}
void USNTLN(long long n){
	if (SNT(n)) {
		cout<<n<<endl;;
		return;
	}
	long long max=1;
		for (long long i=2;i<=n;i++){		
			if (n%i==0){
				cout<<i<<" ";
				if (SNT(n/i)){
					cout<<n/i<<" ";
					break;
				}
				n/=i;
				i--;
			}
		}
	cout<<"\n";
}
int main(){
	int test;
	cin>>test;
	while(test--){
		long long n;
		cin>>n;
		USNTLN(n);
	}
	return 0;
}
// cach khac cung chay dc

/*
#include <iostream> 
#include <math.h> 
using namespace std;
int SNT(long long n) {
	if (n < 2) return 0;
	for (long long i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return 0;
	} return 1;
}

int main() {
	int t; long long n;
	cin >> t;
	while (t--) {
		cin >> n; if (SNT(n)) cout << n;
		else for (long long i = 2; i <= sqrt(n); i++) {
			while (n % i == 0 && SNT(i)) {
				cout << i << " ";
				if ( SNT(n / i)) cout << n / i << " "; n /= i;
			}
		}
		cout << endl;
	}
	return 0;
}*/

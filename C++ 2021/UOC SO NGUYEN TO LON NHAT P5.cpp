#include <iostream> 
#include <cmath> 
using namespace std;
int SNT(long long n) {
	if (n < 2) return 0;
	for (long long i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return 0;
	} 
	return 1;
}

int main() {
	int t; long long n;
	cin >> t;

	while (t--) {
		int max = 0;
		cin >> n;
		if (SNT(n)) {
			cout << n << endl;
		}
		else {
			for (long long i = 2; i <= sqrt(n); i++) {
				while (n % i == 0 && SNT(i)) {
					max = i;
					if ( SNT(n / i))
						max = n / i;
					n /= i;
				}
			}
			cout << max << endl;
		}
	}
	return 0;
}
/* cach minh tu lam
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
long long USNTLN(long long n){
	if (SNT(n)) return n;
	long long max=1;
	long long tt=1;
		while(n!=1){
			tt++;
			if (n%tt==0){
				max=tt;
				if (SNT(n/tt)){
					max=n/tt;
					break;
				}
				n/=tt;
				tt--;
			}
		}
	return max;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		long long n;
		cin>>n;
		cout<<USNTLN(n)<<endl;;
	}
	return 0;
}

*/

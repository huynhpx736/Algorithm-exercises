
//SO NHO HON K P121
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <iostream>
using namespace std;
void nhapMang(int* a, int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

// Utility function to find minimum swaps
// required to club all elements less than
// or equals to k together
int demBuocHoanVi(int* arr, int n, int k) {

    // Find count of elements which are
    // less than equals to k
    int count = 0;
    for (int i = 0; i < n; ++i)
        if (arr[i] <= k)
            ++count;

    // Find unwanted elements in current
    // window of size 'count'
    int bad = 0;
    for (int i = 0; i < count; ++i)
        if (arr[i] > k)
            ++bad;
    int ans = bad;
    for (int i = 0, j = count; j < n; ++i, ++j) {

        // Decrement count of previous window
        if (arr[i] > k)
            --bad;

        // Increment count of current window
        if (arr[j] > k)
            ++bad;

        // Update ans if count of 'bad'
        // is less in current window
        ans = min(ans, bad);
    }
    return ans;
}

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n, k;
        cin >> n >> k;
        int* a;
        a = new int[n];
        nhapMang(a, n);
        cout << demBuocHoanVi(a, n, k);
        cout << endl;
        delete[]a;
    }
    return 0;
}


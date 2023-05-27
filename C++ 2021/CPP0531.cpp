#include <iostream>
using namespace std;

struct ToaDo {
    long long  x;
    long long y;
    long long z;
};
void nhap(ToaDo& a) {
    cin >> a.x >> a.y >> a.z;
}
ToaDo vecto(ToaDo a, ToaDo b) {
    ToaDo p;
    p.x = b.x - a.x;
    p.y = b.y - a.y;
    p.z = b.z - a.z;
    return p;
}
void KTra(ToaDo a, ToaDo b, ToaDo c, ToaDo d) {
    ToaDo p;
    ToaDo ab = vecto(a, b);
    ToaDo ac = vecto(a, c);
    ToaDo ad = vecto(a, d);

    p.x = ab.y * ac.z - ac.y * ab.z;
    p.y = ab.z * ac.x - ac.z * ab.x;
    p.z = ab.x * ac.y - ac.x * ab.y;
    long long  tich = p.x * ad.x + p.y * ad.y + p.z * ad.z;
    if (tich == 0) {
        cout << "YES" << endl;
    }
    else if (tich != 0) cout << "NO"<<endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        ToaDo a; nhap(a);
        ToaDo b; nhap(b);
        ToaDo c; nhap(c);
        ToaDo d; nhap(d);
        KTra(a, b, c, d);
    }
}

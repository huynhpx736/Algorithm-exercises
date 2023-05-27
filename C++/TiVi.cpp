#include<iostream>
#include<fstream>
#include<regex>
#include<string.h>
#include<vector>
using namespace std;

regex dieuKhien("(true|false)");


struct KichT
{
    float ngang;
    float cao;
    float day;
};


struct TiVi
{
    char maTV[10];
    char tenTV[50];
    char heDH[30];
    string hinhAnh;
    string giongNoi;
    KichT KT;
    int nam;
    char hang[20];
    long long gia;
};

void nhapThongTin(TiVi &danhSach) {
    cin.ignore();
    cout << "Ma TiVi: ";
    cin.getline(danhSach.maTV, 9);
    cout << "Ten TiVi: ";
    cin.getline(danhSach.tenTV, 49);
    cout << "He dieu hanh: ";
    cin.getline(danhSach.heDH, 29);
    cout << "Cong nghe hinh anh: ";
    getline(cin, danhSach.hinhAnh);
    cout << "Dieu khien giong noi(true | false): ";
    cin  >> danhSach.giongNoi;
    while (regex_match(danhSach.giongNoi, dieuKhien) == false) {
        cout << "Sai dinh dang, nhap lai chuc nang(true | false): ";
        cin >> danhSach.giongNoi;
    }
    cout << "Kich thuoc TiVi: ";
    cin >> danhSach.KT.ngang >> danhSach.KT.day >> danhSach.KT.cao;
    cout << "Nam ra mat(yyyy): ";
    cin >> danhSach.nam;
    cin.ignore();
    cout << "Hang: ";
    cin.getline(danhSach.hang, 19);
    cout << "Gia ban: ";
    cin >> danhSach.gia;
}

void xuatThongTin(TiVi &x) {
    
    cout << "\nMa TiVi: " << x.maTV;
    cout << "\nTen TiVi: "<< x.tenTV;
    cout << "\nHe dieu hanh: " << x.heDH;
    cout <<"\nCong nghe hinh anh: " << x.hinhAnh;
    cout << "\nDieu khien bang giong noi: " <<x.giongNoi;
    cout << "\nKich thuoc: Ngang " << x.KT.ngang << "cm - Cao " << x.KT.cao << "cm - Day " << x.KT.day << "cm.";
    cout << "\nNam ra mat: "<< x.nam;
    cout << "\nHang san xuat: " << x.hang;
    cout << "\nGia san pham: "<< x.gia;
    cout << endl;
}
        
void ghiMoi(TiVi &x, string fileName) {
    int n;
    cout << "Nhap so luong TiVi: ";
    cin >> n;
    fstream fileOut(fileName, ios::out | ios::binary);
    if (!fileOut) {
        cout << "Khong tao duoc file" << fileName << endl;
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin TiVi thu " << i+1 << endl;
        nhapThongTin(x);
        fileOut.write(reinterpret_cast<char*>(&x), sizeof(TiVi));
    }
    fileOut.close();
}

void ghiThem(TiVi &x, string fileName) {
    int soLuong;
    cout << "Nhap so luong TiVi them: ";
    cin >> soLuong;
    fstream fileOut(fileName, ios::in | ios::binary | ios::app);
    if (!fileOut) {
        cout << "Khong tao duoc file" << fileName << endl;
        exit(1);
    }
    for (int i = 0; i < soLuong; i++) {
        cout << "Nhap thong tin them thu " << i+1 << endl;
        nhapThongTin(x);
        fileOut.write(reinterpret_cast<char*>(&x), sizeof(TiVi));
    }
    fileOut.close();
}

void docFile(TiVi &x, string fileName) {
    fstream fileIn(fileName, ios::in | ios::binary);
    if (!fileIn) {
        cout << "Khong tao duoc file" << endl;
        return;
    }

    while (fileIn){
        fileIn.read(reinterpret_cast<char*>(&x), sizeof(TiVi));
        if (fileIn.eof()) break;
        xuatThongTin(x);
    }
    fileIn.close();
}

void timTheoMa(TiVi &x, string fileName) {
    int dem = 0;
    fstream fileIn(fileName, ios::in | ios::binary);
    if (!fileIn) {
        cout << "Khong mo duoc file" << endl;
        exit(1);
    }
    char maTim[10];
    cout << "Nhap ma can tim: ";
    cin.getline(maTim, 9);
    cout << "------ DANH SACH MA CAN TIM ------\n";
    while (fileIn) {
        fileIn.read(reinterpret_cast<char*>(&x), sizeof(TiVi));
        if (fileIn.eof()) break;
        if (strcmp(maTim, x.maTV) == 0) {
            xuatThongTin(x);
            dem++;
        }
    }
    if (dem == 0) {
        cout << "Khong co ma can tim." << endl;
    }
    fileIn.close();
}

void timTheoTen(TiVi &x, string fileName) {
    int dem = 0;
    char tenTim[50];
    cout << "Nhap ten TiVi can tim: ";
    cin.getline(tenTim, 49);
    fstream fileIn(fileName, ios::in | ios::binary);
    if (!fileIn) {
        cout << "Khong mo duoc file" << fileName << endl;
        exit(1);
    }
    cout << "------ DANH SACH TEN CAN TIM ------\n";
    while (fileIn) {
        fileIn.read(reinterpret_cast<char*>(&x), sizeof(TiVi));
        if (fileIn.eof()) break;
        if (strstr(x.tenTV, tenTim) != NULL) {
            xuatThongTin(x);
            dem++;
        }
    }
    if (dem == 0) {
        cout << "Khong co ten can tim." << endl;
    }
    fileIn.close();
}

void xuatTheoChucNang(TiVi &x, string fileName) {
    string newFile;
    cout << "Nhap ten danh sach: ";
    getline(cin, newFile);
    fstream fileIn(fileName, ios::in | ios::binary);
    if (!fileIn) {
        cout << "Khong mo duoc file" << endl;
        return;
    }
    fstream fileOut(newFile, ios::out | ios::binary);
    if (!fileOut) {
        cout << "Khong tao duoc file" << endl;
        return;
    }
    string luaChon;
    cout << "Nhap chuc nang ban chon(true | false): ";
    cin >> luaChon;
    while (regex_match(luaChon, dieuKhien) == false) {
        cout << "Sai dinh dang, nhap lai(true/false): ";
        cin >> luaChon;
    }
    while (fileIn) {
        fileIn.read(reinterpret_cast<char*>(&x), sizeof(TiVi));
        if (fileIn.eof()) break;
        if (luaChon == x.giongNoi) {
            fileOut.write(reinterpret_cast<char*>(&x), sizeof(TiVi));
        }
    }
    fileOut.close();
    fileIn.close();

    fstream fileIn2(newFile, ios::in | ios::binary);
    if (!fileIn2) {
        cout << "Khong mo duoc file" << endl;
        return;
    }
    docFile(x, newFile);
    fileIn2.close();
}

int demTiViCoGiaTrongKhoang(TiVi &x, string fileName, long long a, long long b) {
    fstream fileIn(fileName, ios::in | ios::binary);
    if (!fileIn) {
        cout << "Khong tao duoc file" << endl;
        exit(1);
    }
    int dem = 0;
    while (fileIn) {
        fileIn.read(reinterpret_cast<char*>(&x), sizeof(TiVi));
        if (fileIn.eof()) break;
        if (x.gia >= a && x.gia <= b) {
            dem++;
        }
    }
    fileIn.close();
    return dem;
}

void inTiViCoGiaTrongKhoang(TiVi &x, string fileName, long long a, long long b) {
    fstream fileIn(fileName, ios::in | ios::binary);
    if (!fileIn) {
        cout << "Khong tao duoc file" << endl;
        return;
    }
    while (fileIn) {
        fileIn.read(reinterpret_cast<char*>(&x), sizeof(TiVi));
        if (fileIn.eof()) break;
        if (x.gia >= a && x.gia <= b) {
            xuatThongTin(x);
        }
    }
    fileIn.close();
}

void demVaInTiViCoGiaTrongKhoang(TiVi &x, string fileName) {
    long long a, b;
    cout << "Nhap khoang gia can tim(a < b): ";
    cin >> a >> b;
    int luaChon;
    do {
        cout << "\n----------------------------------\n";
        cout << "1. Dem so luong.\n";
        cout << "2. In danh sach.\n";
        cout << "3. Quay lai.\n";
        cout << "Nhap lua chon: ";
        cin >> luaChon;
        switch (luaChon) 
        {
            case 1: 
                cout << "\nSo luong TiVi co gia trong khoang " << a << " den " << b << " la: "
                << demTiViCoGiaTrongKhoang(x, fileName, a, b);
                break;
            case 2: 
                cout << "\n-------- Danh sach ---------\n";
                inTiViCoGiaTrongKhoang(x, fileName, a, b);
                break;
            default:
                break;
        }
            
    } while (luaChon != 3);
}

// xuat cac phan tu vector
void xuatVector(vector<TiVi> a) {
    for (int i = 0; i < a.size(); i++) {
        xuatThongTin(a[i]);
    }
}

void sapXep(vector<TiVi> &a) {
    for (int i = 0; i < a.size() - 1; i++) {
        for (int j = i+1; j < a.size(); j++) {
            if (a[i].nam > a[j].nam) {
                swap(a[i], a[j]);
            }
        }
    }
    xuatVector(a);
}

void xuatTheoNam(TiVi &x, string fileName, vector <TiVi> &a){
    int chonNam, dem = 0;
    cout << "Nhap nam bat dau: ";
    cin >> chonNam;
    cin.ignore();

    fstream fileIn(fileName, ios::in | ios::binary);
    if (!fileIn) {
        cout << "Khong tao duoc file" << endl;
        return;
    }

    while (fileIn) {
        fileIn.read(reinterpret_cast<char*>(&x), sizeof(TiVi));
        if (fileIn.eof()) break;
        if (x.nam >= chonNam) {
            a.push_back(x);
            dem++;
        }
    }
    if (dem == 0) cout << "Khong co san pham nao sau nam " << chonNam << endl;
    fileIn.close();

}

void menu() {
    TiVi x;
    vector<TiVi> a;
    int n, luaChon;
    cout << "Nhap ten file: ";
    string fileName;
    getline (cin, fileName);
    do {
        cout << "\n----------------------------------------------------";
        cout << "\n1. Nhap moi thong tin TiVi.";
        cout << "\n2. Nhap them thong tin TiVi";
        cout << "\n3. Doc va xuat thong tin TiVi ra man hinh.";
        cout << "\n4. Tim TiVi theo ma.";
        cout << "\n5. Tim TiVi theo ten.";
        cout << "\n6. Xuat thong tin theo chuc nang dieu khien giong noi.";
        cout << "\n7. Xuat TiVi theo nam ra mat.";
        cout << "\n8. Dem so luong va in danh sach TiVi co gia nam trong khoang nhap tu ban phim.";
        cout << "\n9. Dem so luong va in tat ca cac TiVi theo tung hang.";
        cout << "\n10. Sap xep cac TiVi moi ra mat len truoc.";
        cout << "\n11. Sap xep TiVi tang dan theo hang.";
        cout << "\n12. Thoat.";
        cout << "\nNhap lua chon: ";
        cin >> luaChon;
        cin.ignore();
        switch (luaChon)
        {
        case 1:
            ghiMoi(x, fileName);
            break;
        case 2:
            ghiThem(x, fileName);
            break;
        case 3:
            docFile(x, fileName);
            break;
        case 4:
            timTheoMa(x, fileName);
            break;
        case 5:
            timTheoTen(x, fileName);
            break;
        case 6:
            xuatTheoChucNang(x, fileName);
            break;
        case 7: {
            xuatTheoNam(x, fileName, a);
            sapXep(a);
            break;
        }
        case 8:
            demVaInTiViCoGiaTrongKhoang(x, fileName);
            break;
        // case 9:
        //     break;
        // case 10:
        //     break;
        // case 11:
        //     break;
        default:
            break;
        }
    } while (luaChon != 12);
}

int main() {
    menu();
    return 0;
}

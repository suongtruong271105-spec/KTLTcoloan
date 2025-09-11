#include <iostream>
#include <string>
using namespace std;

int main() {
    string hoten;
    float toan, van, tin, dtb;

    cout << "Nhap ho ten: ";
    getline(cin, hoten);
    cout << "Nhap diem Toan: ";
    cin >> toan;
    cout << "Nhap diem Van: ";
    cin >> van;
    cout << "Nhap diem Tin hoc: ";
    cin >> tin;

    dtb = (toan + van + tin) / 3;

    cout << "Ho ten: " << hoten << endl;
    cout << "Diem trung binh: " << dtb << endl;

    if (dtb < 5)
        cout << "Xep loai: Yeu";
    else if (dtb < 7)
        cout << "Xep loai: Trung binh";
    else if (dtb < 8)
        cout << "Xep loai: Kha";
    else
        cout << "Xep loai: Gioi";

    return 0;
}


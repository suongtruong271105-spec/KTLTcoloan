#include <iostream>
#include <string>
using namespace std;

int main() {
    string ten;
    int chiSoCu, chiSoMoi, soLuong;
    float tienDien = 0;

    cout << "Nhap ten khach hang: ";
    getline(cin, ten);
    cout << "Nhap chi so dien cu: ";
    cin >> chiSoCu;
    cout << "Nhap chi so dien moi: ";
    cin >> chiSoMoi;

    soLuong = chiSoMoi - chiSoCu;

    if (soLuong <= 100) {
        tienDien = soLuong * 1418;
    } else if (soLuong <= 150) {
        tienDien = 100 * 1418 + (soLuong - 100) * 1622;
    } else if (soLuong <= 200) {
        tienDien = 100 * 1418 + 50 * 1622 + (soLuong - 150) * 2044;
    } else if (soLuong <= 300) {
        tienDien = 100 * 1418 + 50 * 1622 + 50 * 2044 + (soLuong - 200) * 2210;
    } else if (soLuong <= 400) {
        tienDien = 100 * 1418 + 50 * 1622 + 50 * 2044 + 100 * 2210 + (soLuong - 300) * 2361;
    } else {
        tienDien = 100 * 1418 + 50 * 1622 + 50 * 2044 + 100 * 2210 + 100 * 2361 + (soLuong - 400) * 2420;
    }

    cout << "Ten khach hang: " << ten << endl;
    cout << "So kWh tieu thu: " << soLuong << endl;
    cout << "Thanh tien: " << tienDien << " VND" << endl;

    return 0;
}


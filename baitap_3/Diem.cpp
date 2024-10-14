#include "Diem.h"
#include <cmath>

Diem::Diem() : x(0), y(0) {}

Diem::Diem(float x, float y) : x(x), y(y) {}

void Diem::Nhap() {
    cout << "Nhap hoanh do (x): ";
    cin >> x;
    cout << "Nhap tung do (y): ";
    cin >> y;
}

void Diem::Xuat() const {
    cout << "(" << x << ", " << y << ")" << endl;
}

void Diem::TinhTien(float dx, float dy) {
    x += dx;
    y += dy;
}

void Diem::PhongTo(float tiLe) {
    x *= tiLe;
    y *= tiLe;
}

void Diem::ThuNho(float tiLe) {
    x /= tiLe;
    y /= tiLe;
}

void Diem::Quay(float goc) {
    float radian = goc * M_PI / 180.0; // Chuyển đổi góc sang radian
    float cosGoc = cos(radian);
    float sinGoc = sin(radian);

    float xNew = x * cosGoc - y * sinGoc;
    float yNew = x * sinGoc + y * cosGoc;
    x = xNew;
    y = yNew;
}

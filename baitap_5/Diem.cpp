#include "Diem.h"

Diem::Diem() : x(0), y(0) {}

Diem::Diem(float hoanh, float tung) : x(hoanh), y(tung) {}

void Diem::Xuat() const {
    cout << "(" << x << "," << y << ")" << endl;
}

void Diem::NhanDoi() {
    x *= 2; // Nhân đôi hoành độ
    y *= 2; // Nhân đôi tung độ
}

void Diem::VeGoc() {
    x = 0; // Đưa hoành độ về gốc
    y = 0; // Đưa tung độ về gốc
}

void Diem::TinhTien(int k, float d) {
    if (k == 0) {
        x += d; // Tịnh tiến theo trục x
    } else {
        y += d; // Tịnh tiến theo trục y
    }
}

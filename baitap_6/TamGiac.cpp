#include "TamGiac.h"

TamGiac::TamGiac() : x1(0), y1(0), x2(0), y2(0), x3(0), y3(0) {}

void TamGiac::Nhap() {
    cout << "Nhap toa do 3 diem (x1, y1, x2, y2, x3, y3): ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3; // Nhập tọa độ 3 điểm
}

void TamGiac::TinhTien(float huong, float doDai) {
    // Tính toán tịnh tiến dựa trên hướng và độ dài
    float rad = huong * (3.14 / 180); // Chuyển đổi độ sang radian
    float dx = doDai * cos(rad); // Tịnh tiến theo trục x
    float dy = doDai * sin(rad); // Tịnh tiến theo trục y

    // Cập nhật tọa độ các điểm sau khi tịnh tiến
    x1 += dx; y1 += dy;
    x2 += dx; y2 += dy;
    x3 += dx; y3 += dy;
}

void TamGiac::Xuat() const {
    cout << "Toa do 3 diem cua tam giac sau khi tinh tien: " << endl;
    cout << "Diem A: (" << x1 << ", " << y1 << ")" << endl;
    cout << "Diem B: (" << x2 << ", " << y2 << ")" << endl;
    cout << "Diem C: (" << x3 << ", " << y3 << ")" << endl;
}

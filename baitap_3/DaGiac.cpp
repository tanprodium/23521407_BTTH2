#include "DaGiac.h"
#include <iostream>

DaGiac::DaGiac() : n(0), Dinh(nullptr) {}

DaGiac::~DaGiac() {
    delete[] Dinh; // Giải phóng bộ nhớ
}

void DaGiac::Nhap() {
    cout << "Nhap so dinh cua da giac: ";
    cin >> n;
    Dinh = new Diem[n]; // Cấp phát bộ nhớ cho mảng đỉnh
    for (int i = 0; i < n; ++i) {
        cout << "Nhap toa do dinh " << i + 1 << ":\n";
        Dinh[i].Nhap(); // Nhập tọa độ cho từng đỉnh
    }
}

void DaGiac::Xuat() const {
    cout << "Da giac co " << n << " dinh:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Dinh " << i + 1 << ": ";
        Dinh[i].Xuat(); // Xuất tọa độ cho từng đỉnh
    }
}

void DaGiac::TinhTien(float dx, float dy) {
    for (int i = 0; i < n; ++i) {
        Dinh[i].TinhTien(dx, dy); // Dịch chuyển từng đỉnh
    }
}

void DaGiac::PhongTo(float tiLe) {
    for (int i = 0; i < n; ++i) {
        Dinh[i].PhongTo(tiLe); // Phóng to từng đỉnh
    }
}

void DaGiac::ThuNho(float tiLe) {
    for (int i = 0; i < n; ++i) {
        Dinh[i].ThuNho(tiLe); // Thu nhỏ từng đỉnh
    }
}

void DaGiac::Quay(float goc) {
    for (int i = 0; i < n; ++i) {
        Dinh[i].Quay(goc); // Quay từng đỉnh
    }
}

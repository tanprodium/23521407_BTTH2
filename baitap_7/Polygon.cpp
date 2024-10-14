#include "Polygon.h"

Polygon::Polygon() : n(0), x(nullptr), y(nullptr) {}

Polygon::~Polygon() {
    delete[] x;
    delete[] y;
}

void Polygon::Nhap() {
    do {
        cout << "Nhap so dinh cua da giac (n > 2): ";
        cin >> n;
    } while (n <= 2); // Số đỉnh phải lớn hơn 2

    x = new float[n]; // Khởi tạo mảng hoành độ
    y = new float[n]; // Khởi tạo mảng tung độ

    cout << "Nhap toa do cac dinh (x, y): " << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Dinh " << i + 1 << ": ";
        cin >> x[i] >> y[i];
    }
}

float Polygon::TinhDienTich() const {
    float area = 0;
    for (int i = 0; i < n - 1; ++i) {
        area += (x[i] * y[i + 1] - x[i + 1] * y[i]);
    }
    area += (x[n - 1] * y[0] - x[0] * y[n - 1]); // Tính cho cặp điểm cuối và đầu
    return abs(area) / 2; // Trả về giá trị tuyệt đối của diện tích
}

void Polygon::XuatDienTich() const {
    cout << "Dien tich cua da giac la: " << TinhDienTich() << endl;
}

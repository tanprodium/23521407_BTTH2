#include "TamGiac.h"
#include <cmath>

TamGiac::TamGiac() {
    A[0] = A[1] = 0;
    B[0] = B[1] = 0;
    C[0] = C[1] = 0;
}

TamGiac::TamGiac(float xA, float yA, float xB, float yB, float xC, float yC) {
    A[0] = xA; A[1] = yA;
    B[0] = xB; B[1] = yB;
    C[0] = xC; C[1] = yC;
}

void TamGiac::Nhap() {
    cout << "Nhap toa do dinh A (xA, yA): ";
    cin >> A[0] >> A[1];
    cout << "Nhap toa do dinh B (xB, yB): ";
    cin >> B[0] >> B[1];
    cout << "Nhap toa do dinh C (xC, yC): ";
    cin >> C[0] >> C[1];
}

void TamGiac::Xuat() const {
    cout << "Dinh A: (" << A[0] << ", " << A[1] << ")\n";
    cout << "Dinh B: (" << B[0] << ", " << B[1] << ")\n";
    cout << "Dinh C: (" << C[0] << ", " << C[1] << ")\n";
}

void TamGiac::TinhTien(float dx, float dy) {
    A[0] += dx; A[1] += dy;
    B[0] += dx; B[1] += dy;
    C[0] += dx; C[1] += dy;
}

void TamGiac::PhongTo(float tiLe) {
    A[0] *= tiLe; A[1] *= tiLe;
    B[0] *= tiLe; B[1] *= tiLe;
    C[0] *= tiLe; C[1] *= tiLe;
}

void TamGiac::ThuNho(float tiLe) {
    A[0] /= tiLe; A[1] /= tiLe;
    B[0] /= tiLe; B[1] /= tiLe;
    C[0] /= tiLe; C[1] /= tiLe;
}

void TamGiac::Quay(float goc) {
    float radian = goc * M_PI / 180.0; // Chuyển đổi góc sang radian
    float cosGoc = cos(radian);
    float sinGoc = sin(radian);

    float xA = A[0], yA = A[1];
    A[0] = xA * cosGoc - yA * sinGoc;
    A[1] = xA * sinGoc + yA * cosGoc;

    float xB = B[0], yB = B[1];
    B[0] = xB * cosGoc - yB * sinGoc;
    B[1] = xB * sinGoc + yB * cosGoc;

    float xC = C[0], yC = C[1];
    C[0] = xC * cosGoc - yC * sinGoc;
    C[1] = xC * sinGoc + yC * cosGoc;
}

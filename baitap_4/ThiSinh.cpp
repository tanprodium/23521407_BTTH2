#include "ThiSinh.h"

ThiSinh::ThiSinh() : iNgay(0), iThang(0), iNam(0), fToan(0), fVan(0), fAnh(0) {}

void ThiSinh::Nhap() {
    cout << "Nhap ten thi sinh: ";
    cin.ignore(); // Bỏ qua ký tự newline
    getline(cin, Ten); // Nhập tên
    cout << "Nhap MSSV: ";
    cin >> MSSV; // Nhập mã số sinh viên
    cout << "Nhap ngay sinh (dd mm yyyy): ";
    cin >> iNgay >> iThang >> iNam; // Nhập ngày sinh
    cout << "Nhap diem Toan: ";
    cin >> fToan; // Nhập điểm toán
    cout << "Nhap diem Van: ";
    cin >> fVan; // Nhập điểm văn
    cout << "Nhap diem Anh: ";
    cin >> fAnh; // Nhập điểm anh
}

void ThiSinh::Xuat() const {
    cout << "Ten: " << Ten << ", MSSV: " << MSSV
         << ", Ngay sinh: " << iNgay << "/" << iThang << "/" << iNam
         << ", Diem Toan: " << fToan
         << ", Diem Van: " << fVan
         << ", Diem Anh: " << fAnh
         << ", Tong diem: " << Tong() << endl;
}

float ThiSinh::Tong() const {
    return fToan + fVan + fAnh; // Tính tổng điểm
}

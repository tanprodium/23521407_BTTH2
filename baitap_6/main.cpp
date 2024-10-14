#include "TamGiac.h"

int main() {
    TamGiac tamGiac; // Tạo đối tượng tam giác
    tamGiac.Nhap(); // Nhập tọa độ các điểm

    float huong, doDai;
    cout << "Nhap huong tinh tien (don vi la do): ";
    cin >> huong; // Nhập hướng tịnh tiến
    cout << "Nhap do dai tinh tien: ";
    cin >> doDai; // Nhập độ dài tịnh tiến

    tamGiac.TinhTien(huong, doDai); // Tịnh tiến tam giác
    tamGiac.Xuat(); // Xuất tọa độ các điểm

    return 0; // Kết thúc chương trình
}

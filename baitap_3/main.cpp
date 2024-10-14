#include "DaGiac.h"

int main() {
    DaGiac dg; // Khởi tạo đối tượng đa giác
    dg.Nhap(); // Nhập thông tin cho đa giác
    dg.Xuat(); // Xuất thông tin của đa giác

    dg.TinhTien(2.0, 3.0); // Dịch chuyển đa giác theo vector (2.0, 3.0)
    cout << "Da giac sau khi tinh tien:\n";
    dg.Xuat(); // Xuất tọa độ sau khi dịch chuyển

    dg.PhongTo(2.0); // Phóng to đa giác với tỷ lệ 2.0
    cout << "Da giac sau khi phong to:\n";
    dg.Xuat(); // Xuất tọa độ sau khi phóng to

    dg.ThuNho(2.0); // Thu nhỏ đa giác với tỷ lệ 2.0
    cout << "Da giac sau khi thu nho:\n";
    dg.Xuat(); // Xuất tọa độ sau khi thu nhỏ

    dg.Quay(45); // Quay đa giác theo góc 45 độ
    cout << "Da giac sau khi quay 45 do:\n";
    dg.Xuat(); // Xuất tọa độ sau khi quay

    return 0; // Kết thúc hàm main
}

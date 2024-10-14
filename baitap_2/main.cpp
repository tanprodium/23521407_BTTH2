#include "TamGiac.h" // Nhúng file tiêu đề chứa khai báo lớp TamGiac

int main() {
    TamGiac tg; // Khởi tạo đối tượng tam giác tg
    tg.Nhap(); // Nhập tọa độ cho các đỉnh của tam giác
    tg.Xuat(); // Xuất tọa độ của các đỉnh tam giác

    tg.TinhTien(2.0, 3.0); // Dịch chuyển tam giác tg theo vector (2.0, 3.0)
    cout << "Tam giac sau khi tinh tien:\n";
    tg.Xuat(); // Xuất tọa độ sau khi dịch chuyển

    tg.PhongTo(2.0); // Phóng to tam giác tg với tỷ lệ 2.0
    cout << "Tam giac sau khi phong to:\n";
    tg.Xuat(); // Xuất tọa độ sau khi phóng to

    tg.ThuNho(2.0); // Thu nhỏ tam giác tg với tỷ lệ 2.0
    cout << "Tam giac sau khi thu nho:\n";
    tg.Xuat(); // Xuất tọa độ sau khi thu nhỏ

    tg.Quay(45); // Quay tam giác tg theo góc 45 độ
    cout << "Tam giac sau khi quay 45 do:\n";
    tg.Xuat(); // Xuất tọa độ sau khi quay

    return 0; // Kết thúc hàm main
}

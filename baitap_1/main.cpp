#include "Diem.h" // Nhúng file tiêu đề chứa khai báo lớp Diem

int main() {
    Diem d1; // Khởi tạo đối tượng d1 của lớp Diem, tọa độ sẽ mặc định là (0, 0)
    d1.Xuat(); // Xuất thông tin của d1

    Diem d2(3.5, 4.2); // Khởi tạo đối tượng d2 với tọa độ (3.5, 4.2)
    d2.Xuat(); // Xuất thông tin của d2

    Diem d3(d2); // Khởi tạo đối tượng d3 bằng cách sao chép từ d2
    d3.Xuat(); // Xuất thông tin của d3

    d1.DatHoanhDo(5.0); // Đặt hoành độ của d1 thành 5.0
    d1.DatTungDo(6.1); // Đặt tung độ của d1 thành 6.1
    d1.Xuat(); // Xuất thông tin cập nhật của d1

    d2.TinhTien(2.5, 3.0); // Dịch chuyển d2 thêm (2.5, 3.0)
    d2.Xuat(); // Xuất thông tin cập nhật của d2

    return 0; // Kết thúc hàm main
}

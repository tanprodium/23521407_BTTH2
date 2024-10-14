#include "List.h"

int main() {
    List list; // Tạo đối tượng List
    int n;

    while (true) {
        cout << "Nhap chi thi (n = -1 de ket thuc): ";
        cin >> n;

        if (n == -1) break; // Kết thúc chương trình

        double x, y;

        switch (n) {
            case 0:
                cout << "Nhap gia tri x: ";
                cin >> x;
                list.Them(x); // Thêm phần tử vào list
                break;
            case 1:
                cout << "Nhap gia tri x: ";
                cin >> x;
                list.XoaDau(x); // Xóa phần tử đầu tiên có giá trị x
                break;
            case 2:
                cout << "Nhap gia tri x: ";
                cin >> x;
                list.XoaTatCa(x); // Xóa tất cả phần tử có giá trị x
                break;
            case 3:
                cout << "Nhap chi so va gia tri (x, y): ";
                cin >> x >> y;
                list.ThayDoi(static_cast<unsigned int>(x), y); // Thay đổi phần tử
                break;
            default:
                cout << "Chi thi khong hop le!" << endl; // Thông báo nếu chi thi không hợp lệ
                break;
        }
    }

    list.Xuat(); // Xuất list hiện tại
    return 0;
}

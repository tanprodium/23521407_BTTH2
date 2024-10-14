#include "Diem.h"

int main() {
    float hoanh, tung;
    cout << "Nhap hoanh do: ";
    cin >> hoanh;
    cout << "Nhap tung do: ";
    cin >> tung;

    Diem diem(hoanh, tung); // Tạo đối tượng điểm với tọa độ đã nhập

    int n;
    cout << "Nhap so luong chi thi: ";
    cin >> n; // Nhập số lượng chỉ thị

    for (int i = 0; i < n; ++i) {
        int chiThi;
        cout << "Nhap chi thi (1, 2, 3): ";
        cin >> chiThi;

        if (chiThi == 1) {
            diem.NhanDoi(); // Nhân đôi hoành độ và tung độ
        }
        else if (chiThi == 2) {
            diem.VeGoc(); // Đưa điểm về gốc tọa độ
        }
        else if (chiThi == 3) {
            int k;
            float d;
            cout << "Nhap huong tinh tien (k = 0: x, k != 0: y): ";
            cin >> k;
            cout << "Nhap do tinh tien: ";
            cin >> d;
            diem.TinhTien(k, d); // Tịnh tiến điểm
        }
        else {
            cout << "Chi thi khong hop le, khong lam gi ca." << endl;
        }
    }

    cout << "Toa do cuoi cung cua diem la: ";
    diem.Xuat(); // Xuất tọa độ cuối cùng của điểm

    return 0; // Kết thúc chương trình
}

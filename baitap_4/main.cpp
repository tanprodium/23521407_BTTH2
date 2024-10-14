#include "ThiSinh.h"

int main() {
    int n;
    cout << "Nhap so thi sinh: ";
    cin >> n; // Nhập số thí sinh
    ThiSinh* dsThiSinh = new ThiSinh[n]; // Cấp phát mảng thí sinh

    // Nhập thông tin cho từng thí sinh
    for (int i = 0; i < n; ++i) {
        cout << "Nhap thong tin thi sinh " << i + 1 << ":\n";
        dsThiSinh[i].Nhap();
    }

    // In ra thông tin thí sinh có tổng điểm lớn hơn 15
    cout << "\nDanh sach thi sinh co tong diem > 15:\n";
    for (int i = 0; i < n; ++i) {
        if (dsThiSinh[i].Tong() > 15) {
            dsThiSinh[i].Xuat();
        }
    }

    // Tìm thí sinh có điểm cao nhất
    int maxIndex = 0; // Chỉ số thí sinh có điểm cao nhất
    for (int i = 1; i < n; ++i) {
        if (dsThiSinh[i].Tong() > dsThiSinh[maxIndex].Tong()) {
            maxIndex = i; // Cập nhật chỉ số
        }
    }

    // In ra thông tin thí sinh có điểm cao nhất
    cout << "\nThi sinh co diem cao nhat:\n";
    dsThiSinh[maxIndex].Xuat();

    delete[] dsThiSinh; // Giải phóng bộ nhớ
    return 0; // Kết thúc hàm main
}

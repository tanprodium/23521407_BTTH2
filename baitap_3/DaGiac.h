#include "Diem.h"

class DaGiac {
private:
    int n; // Số đỉnh
    Diem *Dinh; // Mảng các đỉnh
public:
    DaGiac(); // Constructor mặc định
    ~DaGiac(); // Destructor
    void Nhap(); // Nhập đa giác
    void Xuat() const; // Xuất đa giác
    void TinhTien(float dx, float dy); // Dịch chuyển đa giác
    void PhongTo(float tiLe); // Phóng to đa giác
    void ThuNho(float tiLe); // Thu nhỏ đa giác
    void Quay(float goc); // Quay đa giác
};

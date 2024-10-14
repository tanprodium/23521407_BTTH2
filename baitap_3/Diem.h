#include <iostream>
using namespace std;

class Diem {
private:
    float x; // Hoành độ
    float y; // Tung độ
public:
    Diem(); // Constructor mặc định
    Diem(float x, float y); // Constructor với tọa độ
    void Nhap(); // Nhập tọa độ
    void Xuat() const; // Xuất tọa độ
    void TinhTien(float dx, float dy); // Dịch chuyển
    void PhongTo(float tiLe); // Phóng to
    void ThuNho(float tiLe); // Thu nhỏ
    void Quay(float goc); // Quay theo một góc
};

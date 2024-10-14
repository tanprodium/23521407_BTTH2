#include <iostream>
using namespace std;

class TamGiac {
private:
    float A[2]; // Tọa độ đỉnh A
    float B[2]; // Tọa độ đỉnh B
    float C[2]; // Tọa độ đỉnh C
public:
    TamGiac(); // Constructor mặc định
    TamGiac(float xA, float yA, float xB, float yB, float xC, float yC); // Constructor với tọa độ
    void Nhap(); // Nhập tọa độ cho các đỉnh
    void Xuat() const; // Xuất tọa độ của các đỉnh
    void TinhTien(float dx, float dy); // Dịch chuyển tam giác
    void PhongTo(float tiLe); // Phóng to tam giác
    void ThuNho(float tiLe); // Thu nhỏ tam giác
    void Quay(float goc); // Quay tam giác theo một góc
};

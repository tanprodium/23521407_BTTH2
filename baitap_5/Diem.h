#include <iostream>
using namespace std;

class Diem {
private:
    float x; // Hoành độ
    float y; // Tung độ
public:
    Diem(); // Constructor mặc định
    Diem(float hoanh, float tung); // Constructor có tham số
    void Xuat() const; // Xuất tọa độ điểm
    void NhanDoi(); // Nhân đôi hoành độ và tung độ
    void VeGoc(); // Gán điểm về gốc tọa độ
    void TinhTien(int k, float d); // Tịnh tiến theo trục x hoặc y
};

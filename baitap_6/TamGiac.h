#include <iostream>
#include <cmath>
using namespace std;

class TamGiac {
private:
    float x1, y1; // Tọa độ điểm A
    float x2, y2; // Tọa độ điểm B
    float x3, y3; // Tọa độ điểm C
public:
    TamGiac(); // Constructor mặc định
    void Nhap(); // Nhập tọa độ các điểm
    void TinhTien(float huong, float doDai); // Tịnh tiến tam giác
    void Xuat() const; // Xuất tọa độ các điểm
};

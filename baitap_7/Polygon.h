#include <iostream>
#include <cmath>
using namespace std;

class Polygon {
private:
    int n; // Số đỉnh của đa giác
    float *x; // Mảng chứa hoành độ các đỉnh
    float *y; // Mảng chứa tung độ các đỉnh
public:
    Polygon(); // Constructor mặc định
    ~Polygon(); // Destructor để giải phóng bộ nhớ
    void Nhap(); // Nhập thông tin các điểm
    float TinhDienTich() const; // Tính diện tích đa giác
    void XuatDienTich() const; // Xuất diện tích đa giác
};

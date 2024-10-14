#include <iostream>
#include <string>
using namespace std;

class ThiSinh {
private:
    string Ten; // Tên thí sinh
    string MSSV; // Mã số sinh viên
    int iNgay; // Ngày sinh
    int iThang; // Tháng sinh
    int iNam; // Năm sinh
    float fToan; // Điểm toán
    float fVan; // Điểm văn
    float fAnh; // Điểm anh
public:
    ThiSinh(); // Constructor mặc định
    void Nhap(); // Nhập thông tin thí sinh
    void Xuat() const; // Xuất thông tin thí sinh
    float Tong() const; // Tính tổng điểm
};

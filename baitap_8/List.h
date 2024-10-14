#include <iostream>
using namespace std;

class List {
private:
    double *arr; // Con trỏ quản lý mảng
    unsigned int size; // Kích thước của list

public:
    List(); // Constructor khởi tạo list rỗng
    ~List(); // Destructor để giải phóng bộ nhớ
    void Them(double x); // Thêm phần tử vào list
    void XoaDau(double x); // Xóa phần tử đầu tiên có giá trị x
    void XoaTatCa(double x); // Xóa tất cả phần tử có giá trị x
    void ThayDoi(unsigned int index, double value); // Thay đổi phần tử tại vị trí index
    void Xuat() const; // Xuất list hiện tại
};

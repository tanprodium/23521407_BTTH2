#include "List.h"

List::List() {
    size = 0;
    arr = nullptr; // Khởi tạo con trỏ
}

List::~List() {
    delete[] arr; // Giải phóng bộ nhớ
}

void List::Them(double x) {
    double *newArr = new double[size + 1]; // Tạo mảng mới với kích thước lớn hơn
    for (unsigned int i = 0; i < size; i++) {
        newArr[i] = arr[i]; // Sao chép dữ liệu cũ
    }
    newArr[size] = x; // Thêm phần tử mới
    delete[] arr; // Giải phóng bộ nhớ cũ
    arr = newArr; // Cập nhật con trỏ
    size++;
}

void List::XoaDau(double x) {
    for (unsigned int i = 0; i < size; i++) {
        if (arr[i] == x) {
            for (unsigned int j = i; j < size - 1; j++) {
                arr[j] = arr[j + 1]; // Dịch các phần tử sang trái
            }
            size--;
            double *newArr = new double[size]; // Tạo mảng mới
            for (unsigned int k = 0; k < size; k++) {
                newArr[k] = arr[k]; // Sao chép dữ liệu
            }
            delete[] arr; // Giải phóng bộ nhớ cũ
            arr = newArr; // Cập nhật con trỏ
            return; // Kết thúc hàm
        }
    }
}

void List::XoaTatCa(double x) {
    unsigned int count = 0;
    for (unsigned int i = 0; i < size; i++) {
        if (arr[i] == x) {
            count++; // Đếm số phần tử cần xóa
        }
    }
    if (count == 0) return; // Không có phần tử nào cần xóa

    double *newArr = new double[size - count]; // Tạo mảng mới
    unsigned int j = 0;
    for (unsigned int i = 0; i < size; i++) {
        if (arr[i] != x) {
            newArr[j++] = arr[i]; // Sao chép phần tử không phải x
        }
    }
    delete[] arr; // Giải phóng bộ nhớ cũ
    arr = newArr; // Cập nhật con trỏ
    size -= count; // Cập nhật kích thước
}

void List::ThayDoi(unsigned int index, double value) {
    if (index < size) {
        arr[index] = value; // Thay đổi phần tử tại vị trí index
    }
}

void List::Xuat() const {
    cout << "[";
    for (unsigned int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) cout << ", ";
    }
    cout << "]" << endl; // Xuất list hiện tại
}

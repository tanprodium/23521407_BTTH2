#include "Diem.h"

int main() {
    Diem d1;
    d1.Xuat();
    Diem d2(3.5, 4.2);
    d2.Xuat();
    Diem d3(d2);
    d3.Xuat();
    d1.DatHoanhDo(5.0);
    d1.DatTungDo(6.1);
    d1.Xuat();
    d2.TinhTien(2.5, 3.0);
    d2.Xuat();
    return 0;
}

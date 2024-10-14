#include "Diem.h"

Diem::Diem() : iHoanh(0), iTung(0) {
}
Diem::Diem(float Hoanh, float Tung) : iHoanh(Hoanh), iTung(Tung) {
}
Diem::Diem(const Diem &x) {
    iHoanh = x.iHoanh;
    iTung = x.iTung;
}
void Diem::Xuat() const {
    cout << "Diem(" << iHoanh << ", " << iTung << ")" << endl;
}
float Diem::LayHoanhDo() const {
    return iHoanh;
}
float Diem::LayTungDo() const {
    return iTung;
}
void Diem::DatHoanhDo(float Hoanh) {
    iHoanh = Hoanh;
}
void Diem::DatTungDo(float Tung) {
    iTung = Tung;
}
void Diem::TinhTien(float dHoanh, float dTung) {
    iHoanh += dHoanh;
    iTung += dTung;
}

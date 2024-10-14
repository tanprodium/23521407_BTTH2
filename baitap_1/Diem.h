#include <bits/stdc++.h>
using namespace std;

class Diem {
private:
    float iHoanh;
    float iTung;
public:
    Diem();
    Diem(float Hoanh, float Tung);
    Diem(const Diem &x);
    void Xuat() const;
    float LayHoanhDo() const;
    float LayTungDo() const;
    void DatHoanhDo(float Hoanh);
    void DatTungDo(float Tung);
    void TinhTien(float dHoanh, float dTung);
};

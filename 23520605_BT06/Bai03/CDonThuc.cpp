#include "CDonThuc.h"
#include <iostream>
using namespace std;

CDonThuc::CDonThuc()
{
	Bac = 0;
	HeSo = 0;
}

CDonThuc::CDonThuc(float n, float a)
{
	Bac = n;
	HeSo = a;
}

CDonThuc::CDonThuc(const CDonThuc& X)
{
	Bac = X.Bac;
	HeSo = X.HeSo;
}

ostream& operator<<(ostream& os, CDonThuc A)
{
	os  << A.HeSo << "x^" << A.Bac;
	return os;
}

istream& operator>>(istream& is, CDonThuc& A)
{
	cout << "Nhap he so don thuc: ";
	is >> A.HeSo;
	cout << "Nhap so mu don thuc: ";
	is >> A.Bac;
	return is;
}

CDonThuc& CDonThuc::operator=(CDonThuc& A)
{
	HeSo = A.HeSo;
	Bac = A.Bac;
	return *this;
}

// Hàm nhân hai đơn thức
CDonThuc& CDonThuc::operator*(CDonThuc& dt)
{
    float bacMoi = this->Bac + dt.Bac;
    float heSoMoi = this->HeSo * dt.HeSo;
    return *(new CDonThuc(bacMoi, heSoMoi));
}

// Hàm chia hai đơn thức
CDonThuc& CDonThuc::operator/(CDonThuc& dt)
{
    if (dt.HeSo == 0)
    {
        cout << "Khong the chia cho 0!" << endl;
        return *this;
    }
    float bacMoi = this->Bac - dt.Bac;
    float heSoMoi = this->HeSo / dt.HeSo;
    return *(new CDonThuc(bacMoi, heSoMoi));
}

// Hàm nhân gán một đơn thức
CDonThuc& CDonThuc::operator*=(CDonThuc& dt)
{
    this->Bac += dt.Bac;
    this->HeSo *= dt.HeSo;
    return *this;
}

// Hàm chia gán một đơn thức
CDonThuc& CDonThuc::operator/=(CDonThuc& dt)
{
    if (dt.HeSo == 0)
    {
        cout << "Khong the chia cho 0!" << endl;
        return *this;
    }
    this->Bac -= dt.Bac;
    this->HeSo /= dt.HeSo;
    return *this;
}

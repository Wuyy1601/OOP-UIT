#include "CPhanSo.h"

istream& operator>>(istream& is, CPhanSo& A)
{
	cout << "Nhap tu so: ";
	is >> A.tu;
	cout << "Nhap mau so: ";
	is >> A.mau;
	while (A.mau == 0)
	{
		cout << "Mau so khong hop le. Nhap lai mau so: ";
		is >> A.mau;
	}
	return is;
}

ostream& operator<<(ostream& os, CPhanSo A)
{
	os << A.tu << "/" << A.mau;
	return os;
}

CPhanSo::CPhanSo()
{
	tu = 0;
	mau = 1;
}

CPhanSo::CPhanSo(int T, int M)
{
	tu = T;
	mau = M;
}

CPhanSo::CPhanSo(const CPhanSo& X)
{
	tu = X.tu;
	mau = X.mau;
}

CPhanSo& CPhanSo::operator+(CPhanSo& ps)
{
    float tuMoi = this->tu * ps.mau + ps.tu * this->mau;
    float mauMoi = this->mau * ps.mau;
    return *(new CPhanSo(tuMoi, mauMoi));
}

// Hàm trừ hai phân số
CPhanSo& CPhanSo::operator-(CPhanSo& ps)
{
    float tuMoi = this->tu * ps.mau - ps.tu * this->mau;
    float mauMoi = this->mau * ps.mau;
    return *(new CPhanSo(tuMoi, mauMoi));
}

// Hàm nhân hai phân số
CPhanSo& CPhanSo::operator*(CPhanSo& ps)
{
    float tuMoi = this->tu * ps.tu;
    float mauMoi = this->mau * ps.mau;
    return *(new CPhanSo(tuMoi, mauMoi));
}

// Hàm chia hai phân số
CPhanSo& CPhanSo::operator/(CPhanSo& ps)
{
    float tuMoi = this->tu * ps.mau;
    float mauMoi = this->mau * ps.tu;
    return *(new CPhanSo(tuMoi, mauMoi));
}

// Hàm cộng gán một phân số
CPhanSo& CPhanSo::operator+=(CPhanSo& ps)
{
    this->tu = this->tu * ps.mau + ps.tu * this->mau;
    this->mau = this->mau * ps.mau;
    return *this;
}

// Hàm trừ gán một phân số
CPhanSo& CPhanSo::operator-=(CPhanSo& ps)
{
    this->tu = this->tu * ps.mau - ps.tu * this->mau;
    this->mau = this->mau * ps.mau;
    return *this;
}

// Hàm nhân gán một phân số
CPhanSo& CPhanSo::operator*=(CPhanSo& ps)
{
    this->tu *= ps.tu;
    this->mau *= ps.mau;
    return *this;
}

// Hàm chia gán một phân số
CPhanSo& CPhanSo::operator/=(CPhanSo& ps)
{
    this->tu *= ps.mau;
    this->mau *= ps.tu;
    return *this;
}

// Hàm tiền tố tăng phân số
CPhanSo& CPhanSo::operator++()
{
    this->tu += this->mau;
    return *this;
}

// Hàm tiền tố giảm phân số
CPhanSo& CPhanSo::operator--()
{
    this->tu -= this->mau;
    return *this;
}

CPhanSo& CPhanSo::operator=(CPhanSo& A)
{
    tu = A.tu;
    mau = A.mau;
    return *this;
}

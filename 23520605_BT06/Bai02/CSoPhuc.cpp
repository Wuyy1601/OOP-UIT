#include "CSoPhuc.h"


istream& operator>>(istream& is, CSoPhuc& A)
{
	cout << "Nhap phan thuc: ";
	is >> A.Thuc;
	cout << "Nhap phan ao: ";
	is >> A.Ao;
	return is;
}

ostream& operator<<(ostream& os, CSoPhuc A)
{
	os  << A.Thuc << "+" << A.Ao << "i";
	return os;
}

CSoPhuc::CSoPhuc()
{
	Thuc = 0;
	Ao = 0;
}

CSoPhuc::CSoPhuc(float T, float A)
{
	Thuc = T;
	Ao = A;
}
CSoPhuc::CSoPhuc(const CSoPhuc& A)
{
	Thuc = A.Thuc;
	Ao = A.Ao;
}

CSoPhuc& CSoPhuc::operator=(CSoPhuc& A)
{
	Thuc = A.Thuc;
	Ao = A.Ao;
	return *this;
}


CSoPhuc& CSoPhuc::operator+(CSoPhuc& sp)
{
    float thucMoi = this->Thuc + sp.Thuc;
    float aoMoi = this->Ao + sp.Ao;
    return *(new CSoPhuc(thucMoi, aoMoi));
}

CSoPhuc& CSoPhuc::operator-(CSoPhuc& sp)
{
    float thucMoi = this->Thuc - sp.Thuc;
    float aoMoi = this->Ao - sp.Ao;
    return *(new CSoPhuc(thucMoi, aoMoi));
}

CSoPhuc& CSoPhuc::operator*(CSoPhuc& sp)
{
    float thucMoi = this->Thuc * sp.Thuc - this->Ao * sp.Ao;
    float aoMoi = this->Thuc * sp.Ao + this->Ao * sp.Thuc;
    return *(new CSoPhuc(thucMoi, aoMoi));
}

CSoPhuc& CSoPhuc::operator/(CSoPhuc& sp)
{
    float mauSo = sp.Thuc * sp.Thuc + sp.Ao * sp.Ao;
    float thucMoi = (this->Thuc * sp.Thuc + this->Ao * sp.Ao) / mauSo;
    float aoMoi = (this->Ao * sp.Thuc - this->Thuc * sp.Ao) / mauSo;
    return *(new CSoPhuc(thucMoi, aoMoi));
}

CSoPhuc& CSoPhuc::operator+=(CSoPhuc& sp)
{
    this->Thuc += sp.Thuc;
    this->Ao += sp.Ao;
    return *this;
}

CSoPhuc& CSoPhuc::operator-=(CSoPhuc& sp)
{
    this->Thuc -= sp.Thuc;
    this->Ao -= sp.Ao;
    return *this;
}

CSoPhuc& CSoPhuc::operator*=(CSoPhuc& sp)
{
    float thucMoi = this->Thuc * sp.Thuc - this->Ao * sp.Ao;
    float aoMoi = this->Thuc * sp.Ao + this->Ao * sp.Thuc;
    this->Thuc = thucMoi;
    this->Ao = aoMoi;
    return *this;
}

CSoPhuc& CSoPhuc::operator/=(CSoPhuc& sp)
{
    float mauSo = sp.Thuc * sp.Thuc + sp.Ao * sp.Ao;
    float thucMoi = (this->Thuc * sp.Thuc + this->Ao * sp.Ao) / mauSo;
    float aoMoi = (this->Ao * sp.Thuc - this->Thuc * sp.Ao) / mauSo;
    this->Thuc = thucMoi;
    this->Ao = aoMoi;
    return *this;
}




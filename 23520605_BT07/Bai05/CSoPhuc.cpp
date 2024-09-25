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
	os << A.Thuc << "+" << A.Ao << "i";
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

bool CSoPhuc::operator>(const CSoPhuc& A) const
{
	float module1 = sqrt(Ao * Ao + Thuc * Thuc);
	float module2 = sqrt(A.Ao * A.Ao + A.Thuc * A.Thuc);
	return module1 > module2;
}
bool CSoPhuc::operator>=(const CSoPhuc& A) const
{
	float module1 = sqrt(Ao * Ao + Thuc * Thuc);
	float module2 = sqrt(A.Ao * A.Ao + A.Thuc * A.Thuc);
	return module1 >= module2;
}
bool CSoPhuc::operator<(const CSoPhuc& A) const
{
	float module1 = sqrt(Ao * Ao + Thuc * Thuc);
	float module2 = sqrt(A.Ao * A.Ao + A.Thuc * A.Thuc);
	return module1 < module2;
}
bool CSoPhuc::operator<=(const CSoPhuc& A) const
{
	float module1 = sqrt(Ao * Ao + Thuc * Thuc);
	float module2 = sqrt(A.Ao * A.Ao + A.Thuc * A.Thuc);
	return module1 <= module2;
}
bool CSoPhuc::operator==(const CSoPhuc& A) const
{
	float module1 = sqrt(Ao * Ao + Thuc * Thuc);
	float module2 = sqrt(A.Ao * A.Ao + A.Thuc * A.Thuc);
	return module1 == module2;
}

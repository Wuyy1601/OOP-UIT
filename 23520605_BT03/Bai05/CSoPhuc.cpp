#include "CSoPhuc.h"

istream& operator>>(istream& is, CSoPhuc& A)
{
	cout << "Nhap phan thuc: ";
	is >> A.thuc;
	cout << "Nhap phan ao: ";
	is >> A.ao;
	return is;
 }
ostream& operator<<(ostream& os, CSoPhuc A)
{
	os << "So phuc: " << A.thuc << "+" << A.ao << "i";
	return os;
 }

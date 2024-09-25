#include "CSoPhuc.h"


ostream& operator<<(ostream& os, CSoPhuc A)
{
	os << "So phuc: " << A.Thuc << "+" << A.Ao << "i";
	return os;
}

#include "CSoPhuc.h"
#include <iostream>
using namespace std;

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

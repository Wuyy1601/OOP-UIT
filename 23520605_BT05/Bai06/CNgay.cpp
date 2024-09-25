#include "CNgay.h"
ostream& operator<<(ostream& os, CNgay x)
{
	os << "Ngay :" << x.Ngay << "/" << x.Thang << "/" << x.Nam;
	return os;
}

CNgay::CNgay()
{
	Ngay = 1;
	Thang = 1;
	Nam = 1;
}
CNgay::CNgay(int ng, int th, int n)
{
	Ngay = ng;
	Thang = th;
	Nam = n;
}
CNgay::CNgay(const CNgay& X)
{
	Ngay = X.Ngay;
	Thang = X.Thang;
	Nam = X.Nam;
}

CNgay& CNgay::operator=(CNgay& A)
{
	Ngay = A.Ngay;
	Thang = A.Thang;
	Nam = A.Nam;
	return *this;
}

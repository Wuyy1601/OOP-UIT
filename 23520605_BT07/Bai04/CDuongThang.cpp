#include "CDuongThang.h"

istream& operator>>(istream& is, CDuongThang& a)
{
	cout << "Nhap duong thang: ";
	cout << "Nhap he so thu nhat: ";
	is >> a.a;	
	cout << "Nhap he so thu hai: ";
	is >> a.b;
	cout << "Nhap he so thu ba: ";
	is >> a.c;
	return is;
}

ostream& operator<<(ostream& os, CDuongThang a)
{
	os << "Duong thang: ";
	if (a.a == 1)
		os << "x";
	else if (a.a == -1)
		os << "-x";
	else if (a.a != 0)
		os << a.a << "x";

	if (a.b == 0 && a.a == 0)
		os << "Khong xac dinh.";
	else if (a.b == 1 && a.a != 0)
		os << " + y";
	else if (a.b == 1 && a.a == 0)
		os << "y";
	else if (a.b == -1 && a.a != 0)
		os << " - y";
	else if (a.b == -1 && a.a == 0)
		os << "- y";
	else if (a.a == 0 && a.b != 0)
		os << a.b << "y";
	else if (a.a != 0 && a.b > 0)
		os << " + " << a.b << "y";
	else if (a.a != 0 && a.b < 0)
		os << " - " << -a.b << "y";

	bool check = (a.a == 0 && a.b == 0);
	if (check == false)
	{
		if (a.c == 0)
			os << " = 0";
		else if (a.c > 0)
			os << " + " << a.c << " = 0";
		else
			os << " - " << -a.c << " = 0";
	}
	return os;
}

CDuongThang& CDuongThang::operator=(const CDuongThang& A)
{
	a = A.a;
	b = A.b;
	c = A.c;
	return *this;
}

bool CDuongThang::operator == (const CDuongThang& A)
{
	float tmpa = a / A.a;
	float tmpb = b / A.b;
	float tmpc = c / A.c;
	if (tmpa == tmpb && tmpa == tmpc && tmpb == tmpc)
		return true;
	return false;
}

bool CDuongThang::operator != (const CDuongThang& A)
{
	float tmpa = a / A.a;
	float tmpb = b / A.b;
	float tmpc = c / A.c;
	if (tmpa == tmpb && tmpa == tmpc && tmpb == tmpc)
		return false;
	return true;
}

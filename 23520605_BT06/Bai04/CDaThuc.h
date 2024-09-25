#pragma once
#include <iostream>
using namespace std;
class CDaThuc
{
	//F(x) = anx^n+...+a0
private:
	int n;
	int a[100];
public:
	void RutGon();
	friend istream& operator>>(istream&, CDaThuc&);
	friend ostream& operator<<(ostream&, CDaThuc);
	CDaThuc& operator+(CDaThuc&);
	CDaThuc& operator-(CDaThuc&);
	CDaThuc& operator*(CDaThuc&);
	CDaThuc& operator/(CDaThuc&);
	CDaThuc& operator+=(CDaThuc&);
	CDaThuc& operator-=(CDaThuc&);
	CDaThuc& operator*=(CDaThuc&);
	CDaThuc& operator/=(CDaThuc&);
	CDaThuc& operator=(CDaThuc&);
};


#pragma once
#include <iostream>
using namespace std;
class CDonThuc
{
	float Bac;
	float HeSo;
public:
	CDonThuc();
	CDonThuc(float, float);
	CDonThuc(const CDonThuc&);
	friend ostream& operator<<(ostream&, CDonThuc);
	friend istream& operator>>(istream&, CDonThuc&);
	CDonThuc& operator*(CDonThuc&);
	CDonThuc& operator/(CDonThuc&);
	CDonThuc& operator*=(CDonThuc&);
	CDonThuc& operator/=(CDonThuc&);
	CDonThuc& operator=(CDonThuc&);
};



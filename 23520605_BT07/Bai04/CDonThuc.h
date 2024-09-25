#pragma once
#include <iostream>
using namespace std;

class CDonThuc
{
	float heso;
	int somu;
public:
	friend istream& operator>>(istream&, CDonThuc&);
	friend ostream& operator<<(ostream&, CDonThuc);
	CDonThuc& operator=(const CDonThuc&);
	bool operator == (const CDonThuc&);
	bool operator != (const CDonThuc&);
};
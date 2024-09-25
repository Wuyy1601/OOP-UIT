#pragma once
#include <iostream>
using namespace std;

class CDonThuc
{
	float HeSo;
	float SoMu;
public:
	friend istream& operator>>(istream&, CDonThuc&);
	friend ostream& operator<<(ostream&, CDonThuc);
};


#pragma once
#include <iostream>
using namespace std;

class CThoiGian
{
	int h, m, s;
public:
	friend istream& operator >> (istream&, CThoiGian&);
	friend ostream& operator << (ostream&, CThoiGian);
	CThoiGian& operator = (const CThoiGian&);
	bool operator == (CThoiGian&);
	bool operator != (CThoiGian&);
};
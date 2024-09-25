#pragma once
#include <iostream>
using namespace std;

class CThoiGian
{
		unsigned gio;
		unsigned phut;
		unsigned giay;
	public:
		friend istream& operator>>(istream&, CThoiGian&);
		friend ostream& operator<<(ostream&, CThoiGian);
};


#pragma once
#include <iostream>
using namespace std;
class CDuongThang
{
		float a;
		float b;
	public:
		friend istream& operator>>(istream&, CDuongThang&);
		friend ostream& operator<<(ostream&, CDuongThang);
};


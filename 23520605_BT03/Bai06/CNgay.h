#pragma once
#include <iostream>
using namespace std;
class CNgay
{
		unsigned ngay,thang,nam;
	public:
		friend istream& operator>>(istream&, CNgay&);
		friend ostream& operator<<(ostream&, CNgay);
};


#pragma once
#include <iostream>
using namespace std;
class CNgay
{
	unsigned Ngay, Thang, Nam;
public:
	friend ostream& operator<<(ostream&, CNgay);
	CNgay();
	CNgay(int, int, int);
	CNgay(const CNgay&);
	CNgay& operator=(CNgay&);
};


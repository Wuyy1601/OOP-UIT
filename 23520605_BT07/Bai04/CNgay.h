#pragma once
#include <iostream>
using namespace std;

class CNgay
{
	int ng, th, nm;
public:
	friend istream& operator >> (istream&, CNgay&);
	friend ostream& operator << (ostream&, CNgay);
	CNgay& operator = (const CNgay&);
	bool operator == (const CNgay&);
	bool operator != (const CNgay&);
};

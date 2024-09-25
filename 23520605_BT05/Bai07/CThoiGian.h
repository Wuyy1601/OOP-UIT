#pragma once
#include <iostream>
using namespace std;

class CThoiGian
{
	int Gio;
	int Phut;
	int Giay;
public:
	friend ostream& operator<<(ostream&, CThoiGian);
	CThoiGian();
	CThoiGian(int, int, int);
	CThoiGian(const CThoiGian&);
	CThoiGian& operator=(CThoiGian&);
};


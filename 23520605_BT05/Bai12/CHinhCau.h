#pragma once
#include <iostream>
using namespace std;

class CDiemKhongGian
{
private:
	float x;
	float y;
	float z;
public:
	friend ostream& operator<<(ostream&, CDiemKhongGian);
	CDiemKhongGian();
	CDiemKhongGian(float, float, float);
	CDiemKhongGian(const CDiemKhongGian&);
};

class CHinhCau
{
	CDiemKhongGian O;
	float R;
public:
	friend ostream& operator<<(ostream&, CHinhCau);
	CHinhCau();
	CHinhCau(CDiemKhongGian, float);
	CHinhCau(const CHinhCau&);
	CHinhCau& operator=(CHinhCau&);
};
#pragma once

class CDiemKhongGian
{
	float x;
	float y;
	float z;
public:
	CDiemKhongGian();
	CDiemKhongGian(float, float, float);
	CDiemKhongGian(const CDiemKhongGian&);
};

class CHinhCau
{
	CDiemKhongGian O;
	float R;
public:
	CHinhCau();
	CHinhCau(CDiemKhongGian, float);
	CHinhCau(const CHinhCau&);
	~CHinhCau();
};


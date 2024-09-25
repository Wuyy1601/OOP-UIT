#pragma once
class Ngay
{
private:
	int ngay;
	int thang;
	int nam;
public:
	void Nhap();
	void Xuat();
	bool CheckYear(Ngay x);
	int SoNgayTrongThang(Ngay x);
	Ngay NgayKeTiep(Ngay x);
};



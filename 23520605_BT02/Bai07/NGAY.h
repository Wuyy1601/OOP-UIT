#pragma once
class NGAY
{
private:
	int ngay;
	int thang;
	int nam;
public:
	void Nhap();
	void Xuat();
	bool KiemTraNamNhuan();
	int SoNgayTrongThang(NGAY x);
	NGAY NgayHomQua(NGAY x);
};


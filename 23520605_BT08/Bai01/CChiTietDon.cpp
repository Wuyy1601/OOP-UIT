#include "CChiTietDon.h"

void CChiTietDon::Nhap()
{
	cout << "Nhap ma so: ";
	cin.ignore();
	cin >> MaSo;
	cout << "Nhap gia tien: ";
	cin >> GiaTien;
}

void CChiTietDon::Xuat()
{
	cout << "Ma so: " << MaSo << endl;
	cout << "Gia tien: " << GiaTien << endl;
}

float CChiTietDon::TinhTien()
{
	return GiaTien;
}

CChiTiet* CChiTietDon::TimKiem(string ms)
{
	if (MaSo.compare(ms) == 0)
		return this;
	return nullptr;
}

int CChiTietDon::DemChiTietDon()
{
	return 1;
}

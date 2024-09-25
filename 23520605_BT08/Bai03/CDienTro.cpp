#include "CDienTro.h"
#include "CSongSong.h"
#include "CMachDien.h"
#include "CNoiTiep.h"

void CDienTro::Nhap()
{
	cout << "Nhap ma so: ";
	getline(cin, MaSo);
	cout << "Nhap dien tro: ";
	cin >> R;
	cin.ignore();
}

void CDienTro::Xuat()
{
	cout << "Ma so: " << MaSo << endl;
	cout << "Dien tro: " << R << endl;
}

float CDienTro::TinhDienTro()
{
	return R;
}

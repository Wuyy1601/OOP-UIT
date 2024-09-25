//Mã số sinh viên:23520605
//Họ và tên: Đồng Khánh Huy
//Ngày sinh:16/01/2005
//Lớp:TMĐT2023.1

#include "SachThamKhao.h"

STK::STK()
{
	MaSach = "";
	TenSach = "";
	NhaXuatBan = "";
	SoLuong = 0;
	DonGia = 0;
	TienThue = 0;
}
istream& operator>>(istream& is, STK& STK)
{
	cout << "Nhap ma sach: ";
	getline(cin, STK.MaSach);
	cout << "Nhap ten sach: ";
	getline(cin, STK.TenSach);
	cout << "Nhap nha xuat ban: ";
	getline(cin, STK.NhaXuatBan);
	cout << "Nhap so luong: ";
	is >> STK.SoLuong;
	cout << "Nhap don gia: ";
	is >> STK.DonGia;
	cout << "Nhap tien thue: ";
	is >> STK.TienThue;
	return is;
}
ostream& operator<<(ostream& os, STK STK)
{
	os << "Ma sach: " << STK.MaSach << endl;
	os << "Ten sach: " << STK.TenSach << endl;
	os << "Nha xuat ban: " << STK.NhaXuatBan << endl;
	os << "So luong :" << STK.SoLuong << endl;
	os << "Don gia: " << STK.DonGia << endl;
	os << "Tien thue: " << STK.TienThue << endl;
	return os;
}
float STK::ThanhTienSTK() const
{
	return SoLuong * DonGia + TienThue;
}
string STK::LayTenNXB() const
{
	return NhaXuatBan;
}
string STK::LayTenSach() const
{
	return TenSach;
}


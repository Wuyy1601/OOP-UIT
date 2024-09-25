//Mã số sinh viên:23520605
//Họ và tên: Đồng Khánh Huy
//Ngày sinh:16/01/2005
//Lớp:TMĐT2023.1
#include "SachGiaoKhoa.h"

SGK::SGK()
{
	MaSach = "";
	TenSach = "";
	NhaXuatBan = "";
	soluong = 0;
	DonGia = 0;
	TinhTrang = -1;
}
istream& operator>>(istream& is, SGK& SGK)
{
	cout << "Nhap ma sach: ";
	getline(cin, SGK.MaSach);
	cout << "Nhap ten sach: ";
	getline(cin, SGK.TenSach);
	cout << "Nhap nha xuat ban: ";
	getline(cin, SGK.NhaXuatBan);
	cout << "Nhap so luong: ";
	is >> SGK.soluong;
	cout << "Nhap don gia: ";
	is >> SGK.DonGia;
	cout << "Nhap tinh trang(0: cu, 1: moi) : ";
	is >> SGK.TinhTrang;
	return is;
}
ostream& operator<<(ostream& os, SGK SGK)
{
	os << "Ma sach: " << SGK.MaSach << endl;
	os << "Ten sach: " << SGK.TenSach << endl;
	os << "Nha xuat ban: " << SGK.NhaXuatBan << endl;
	os << "So luong :" << SGK.soluong << endl;
	os << "Don gia: " << SGK.DonGia << endl;
	if (SGK.TinhTrang == 1)
		os << "Tinh trang: moi" << endl;
	if (SGK.TinhTrang == 0)
		os << "Tinh trang: cu" << endl;
	return os;
}

float SGK::ThanhTienSGK() const
{
	if (TinhTrang == 0)
		return soluong * DonGia * 0.5;
	if (TinhTrang == 1)
		return soluong * DonGia;
}

string SGK::LayTenNXB() const
{
	return NhaXuatBan;
}

string SGK::LayTenSach() const
{
	return TenSach;
}

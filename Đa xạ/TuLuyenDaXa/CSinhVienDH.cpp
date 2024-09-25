#include "CSinhVienDH.h"

void CSinhVienDH::Nhap()
{
	cout << "Nhap mssv: ";
	cin.ignore();
	getline(cin, mssv);
	cout << "Nhap ho ten: ";
	getline(cin, hoten);
	cout << "Nhap dia chi: ";
	getline(cin, diachi);
	cout << "Nhap so tin chi: ";
	cin >> tongsotinchi;
	cout << "Nhap diem trung binh: ";
	cin >> diemtrungbinh;
	cout << "Nhap ten luan van: ";
	cin.ignore();
	getline(cin, tenluanvan);
	cout << "Nhap diem luan van: ";
	cin >> diemluanvan;
}

void CSinhVienDH::Xuat()
{
	cout << "mssv: " << mssv << endl;
	cout << "ho ten: " << hoten << endl;
	cout << "dia chi: " << diachi << endl;
	cout << "tong so tin chi: " << tongsotinchi << endl;
	cout << "DTB: " << diemtrungbinh << endl;
	cout << "ten luan van: " << tenluanvan << endl;
	cout << "diem luan van: " << diemluanvan << endl;
}

int CSinhVienDH::sosinhvientotnghiep()
{
	if (tongsotinchi >= 145 && diemtrungbinh >= 5 && diemluanvan >= 5)
	{
		return 1;
	}
	return 0;
}

CSinhVien* CSinhVienDH::dtbmax()
{

}
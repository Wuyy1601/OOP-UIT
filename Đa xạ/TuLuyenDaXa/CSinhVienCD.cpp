#include "CSinhVienCD.h"

void CSinhVienCD::Nhap()
{
	cout << "Nhap mssv: ";
	getline(cin, mssv);
	cout << "Nhap ho ten: ";
	getline(cin, hoten);
	cout << "Nhap dia chi: ";
	getline(cin, diachi);
	cout << "Nhap so tin chi: ";
	cin >> tongsotinchi;
	cout << "Nhap diem trung binh: ";
	cin >> diemtrungbinh;
	cout << "Nhap diem tot nghiep: ";
	cin >> diemthitotnghiep;
}

void CSinhVienCD::Xuat()
{
	cout << "mssv: " << mssv << endl;
	cout << "ho ten: " << hoten << endl;
	cout << "dia chi: " << diachi << endl;
	cout << "tong so tin chi: " << tongsotinchi << endl;
	cout << "DTB: " << diemtrungbinh << endl;
	cout << "diem tot nghiep: " << diemthitotnghiep << endl;
}

int CSinhVienCD::sosinhvientotnghiep()
{
	if (tongsotinchi >= 110 && diemtrungbinh >= 5 && diemthitotnghiep >= 5)
	{
		return 1;
	}
	return 0;
}
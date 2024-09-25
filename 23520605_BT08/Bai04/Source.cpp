#include <iostream>
using namespace std;
#include "CThuMuc.h"
#include "CTapTin.h"
#include "CDoiTuongLuuTru.h"

int main()
{
	CThuMuc F;
	F.Nhap();
	F.Xuat();
	cout << "Tong dung luong cua thu muc: " << F.TongDungLuong() << endl;
	cout << "So luong tap tin: " << F.DemTapTin() << endl;
	cout << "So luong thu muc: " << F.DemThuMuc() - 1 << endl;
	return 0;
}
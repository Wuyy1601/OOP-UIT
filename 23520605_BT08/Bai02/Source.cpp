#include <iostream>
#include "CCongTy.h"
using namespace std;

int main()
{
	CCongTy CT;
	CT.Nhap();
	CT.Xuat();
	cout << "Tong luong cua cong ty: " << CT.TinhLuong() << endl;
	string ht;
	cout << "Nhap ho ten can tim: ";
	cin.ignore();
	getline(cin, ht);
	CNhanVien* kq = CT.TimKiem(ht);
	if (kq != NULL)
	{
		cout << "Tim thay !!" << endl;
		kq->Xuat();
	}
	else
	{
		cout << "Khong tim thay !!" << endl;
	}
	return 0;
}
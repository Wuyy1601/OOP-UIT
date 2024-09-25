#include "CSongSong.h"
#include "CMachDien.h"
#include "CNoiTiep.h"
#include "CDienTro.h"
#include <iostream>
using namespace std;

int main()
{
	CMachDien* M;
	int loai;
	cout << "Nhap mach dien " <<  endl;
	cout << "Nhap loai(0.NT, 1.Ss, 2.Dien tro): ";
	cin >> loai;
	cin.ignore();
	switch (loai)
		{
		case 0:
			M = new CNoiTiep;
			break;
		case 1:
			M = new CSongSong;
			break;
		default:
			M = new CDienTro;
		}
	M->Nhap();
	M->Xuat();
	cout << "Dien tro cua mach dien: " << M->TinhDienTro() << endl;
	return 0;
}
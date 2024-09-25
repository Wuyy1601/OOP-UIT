#include "CPhanSo.h"

 istream& operator>>(istream& is , CPhanSo& A)
{
	cout << "Nhap tu so: ";
	is >> A.tu;
	cout << "Nhap mau so: ";
	is >> A.mau;
	while (A.mau == 0)
	{
		cout << "Mau so khong hop le. Nhap lai mau so: ";
		is >> A.mau;
	}
	return is;
}

 ostream& operator<<(ostream& os , CPhanSo A)
 {
	 os << "Phan So : " << A.tu << "/" << A.mau;
	 return os;
 }

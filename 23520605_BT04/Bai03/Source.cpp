#include <iostream>
#include "CPhanSo.h"
using namespace std;

int main()
{
	CPhanSo ps;

	CPhanSo ps1 = CPhanSo(2, 3);

	CPhanSo ps2(ps1);
	return 0;
}
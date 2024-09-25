#include <iostream>
using namespace std;
#include "CPhanSo.h"

int main()
{
	CPhanSo ps1(1,2);
	CPhanSo ps2;
	ps2 = ps1;
	cout << ps2 << endl;
	return 0;
}
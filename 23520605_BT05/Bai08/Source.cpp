#include <iostream>
#include "CDonThuc.h"
using namespace std;

int main()
{
	CDonThuc A(-3, 5);
	CDonThuc B;
	B = A;
	cout << B;
	return 0;
}
#include <iostream>
using namespace std;
#include "CDiem.h"

int main()
{
	CDiem A(3, 4);
	CDiem B;
	B = A;
	cout << B << endl;
	return 0;
}
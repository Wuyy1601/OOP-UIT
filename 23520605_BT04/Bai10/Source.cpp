#include <iostream>
#include "CDuongTron.h"
using namespace std;

int main()
{
	CDuongTron D;

	CDiem A(1, 1);
	CDuongTron B(A, 3);

	CDuongTron C(B);
	return 0;
}
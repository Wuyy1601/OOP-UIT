#include "CDuongTron.h"
#include <iostream>
using namespace std;

int main()
{
	CDiem O1(2, 3);
	CDuongTron C1(O1, 3);
	CDuongTron C2;
	C2 = C1;
	cout << C2;
	return 0;
}
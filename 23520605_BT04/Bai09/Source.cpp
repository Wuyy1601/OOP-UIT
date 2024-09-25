#include <iostream>
#include "CDuongThang.h"
using namespace std;

int main()
{
	CDuongThang A;
	
	CDuongThang B(1, 2);

	CDuongThang C(B);
	return 0;
}
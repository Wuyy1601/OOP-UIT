#include "CDiem.h"
#include "CNgay.h"
#include "CThoiGian.h"
#include "CDonThuc.h"
#include "CDiemKhongGian.h"
#include "CDuongThang.h"
#include "CTamGiac.h"
#include "CHinhCau.h"

int main()
{
	CDiem a, b;
	cin >> a >> b;
	cout << a <<", " << b << endl;
	if (a == b)
		cout << "2 diem giong nhau.\n";
	else
		cout << "2 diem khac nhau.\n";
	cout << "--------------------------------\n";

	CNgay c, d;
	cin >> c >> d;
	cout << c << ", " << d << endl;
	if (c == d)
		cout << "2 ngay giong nhau.\n";
	else
		cout << "2 ngay khac nhau.\n";
	cout << "--------------------------------\n";

	CThoiGian e, f;
	cin >> e >> f;
	cout << e << ", " << f << endl;
	if (e == f)
		cout << "2 thoi gian giong nhau.\n";
	else
		cout << "2 thoi gian khac nhau.\n";
	cout << "--------------------------------\n";

	CDonThuc g, h;
	cin >> g >> h;
	cout << g << ", " << h << endl;
	if (g == h)
		cout << "2 don thuc giong nhau.\n";
	else
		cout << "2 don thuc khac nhau.\n";
	cout << "--------------------------------\n";

	CDiemKhongGian i, k;
	cin >> i >> k;
	cout << i << ", " << k << endl;
	if (i == k)
		cout << "2 diem khong gian giong nhau.\n";
	else
		cout << "2 diem khong gian khac nhau.\n";
	cout << "--------------------------------\n";

	CDuongThang l, m;
	cin >> l >> m;
	cout << l << ", " << m << endl;
	if (l == m)
		cout << "2 duong thang giong nhau.\n";
	else
		cout << "2 duong thang khac nhau.\n";
	cout << "--------------------------------\n";

	CTamGiac n, o;
	cin >> n >> o;
	cout << n << ", " << o << endl;
	if (n == o)
		cout << "2 tam giac giong nhau.\n";
	else
		cout << "2 tam giac khac nhau.\n";
	cout << "--------------------------------\n";

	CHinhCau p, q;
	cin >> p >> q;
	cout << p << ", " << q << endl;
	if (p == q)
		cout << "2 hinh cau giong nhau.\n";
	else
		cout << "2 hinh cau khac nhau.\n";
	cout << "--------------------------------\n";

	return 0;
}
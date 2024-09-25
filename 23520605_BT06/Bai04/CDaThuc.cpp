#include "CDaThuc.h"

istream& operator>>(istream& is, CDaThuc& A)
{
	cout << "Nhap bac n: ";
	is >> A.n;
	for (int i = A.n; i >= 0; i--)
	{
		cout << "Nhap he so a[" << i << "] : ";
		is >> A.a[i];
	}
	return is;
}

ostream& operator<<(ostream& os, CDaThuc A)
{
	for (int i = A.n; i > 0; i--)
	{
		os << A.a[i] << "x^" << i << " + ";
	}
	os << A.a[0];
	return os;
}

void CDaThuc::RutGon()
{
    while (a[n] == 0)
        n--;
}

// Toán tử gán
CDaThuc& CDaThuc::operator=(CDaThuc& A)
{
    n = A.n;
    for (int i = 0; i <= n; i++)
    {
        a[i] = A.a[i];
    }
    return *this;
}

// Toán tử cộng
CDaThuc& CDaThuc::operator+(CDaThuc& A)
{
    int BacCaoNhat = max(n, A.n);
    CDaThuc temp;
    temp.n = BacCaoNhat;
    for (int i = 0; i <= temp.n; i++)
    {
        temp.a[i] = 0;
    }
    for (int i = 0; i <= n; i++)
    {
        temp.a[i] += a[i];
    }
    for (int i = 0; i <= A.n; i++)
    {
        temp.a[i] += A.a[i];
    }
    return temp;
}

// Toán tử trừ
CDaThuc& CDaThuc::operator-(CDaThuc& A)
{
    int BacCaoNhat = max(n, A.n);
    CDaThuc temp;
    temp.n = BacCaoNhat;
    for (int i = 0; i <= temp.n; i++)
    {
        temp.a[i] = 0;
    }
    for (int i = 0; i <= n; i++)
    {
        temp.a[i] += a[i];
    }
    for (int i = 0; i <= A.n; i++)
    {
        temp.a[i] -= A.a[i];
    }
    temp.RutGon();
    return temp;
}


// Toán tử cộng gán
CDaThuc& CDaThuc::operator+=(CDaThuc& A)
{
    int BacCaoNhat = max(n, A.n);
    CDaThuc temp;
    temp.n = BacCaoNhat;
    for (int i = 0; i <= temp.n; i++)
    {
        temp.a[i] = 0;
    }
    for (int i = 0; i <= n; i++)
    {
        temp.a[i] += a[i];
    }
    for (int i = 0; i <= A.n; i++)
    {
        temp.a[i] += A.a[i];
    }
    *this = temp;
    return temp;
}

// Toán tử trừ gán
CDaThuc& CDaThuc::operator-=(CDaThuc& A)
{
    int BacCaoNhat = max(n, A.n);
    CDaThuc temp;
    temp.n = BacCaoNhat;
    for (int i = 0; i <= temp.n; i++)
    {
        temp.a[i] = 0;
    }
    for (int i = 0; i <= n; i++)
    {
        temp.a[i] += a[i];
    }
    for (int i = 0; i <= A.n; i++)
    {
        temp.a[i] -= A.a[i];
    }
    temp.RutGon();
    *this = temp;
    return *this;
}

CDaThuc& CDaThuc::operator*(CDaThuc& A)
{

    CDaThuc temp;
    temp.n = n + A.n;
    for (int i = 0; i <= temp.n; i++)
    {
        temp.a[i] = 0;
    }
    for (int i = 0; i <= A.n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            temp.a[i + j] += A.a[i] * a[j];
        }
    }
    return temp;
}

CDaThuc& CDaThuc::operator*=(CDaThuc& A)
{

    CDaThuc temp;
    temp.n = n + A.n;
    for (int i = 0; i <= temp.n; i++)
    {
        temp.a[i] = 0;
    }
    for (int i = 0; i <= A.n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            temp.a[i + j] += A.a[i] * a[j];
        }
    }
    *this = temp;
    return *this;
}

CDaThuc& CDaThuc::operator/(CDaThuc& A)
{
    CDaThuc temp;
    temp.n = max(n - A.n, 0);
    for (int i = 0; i <= temp.n; i++)
    {
        temp.a[i] = 0;
    }
    CDaThuc BC = *this;
    CDaThuc C = A;
    while (BC.n >= C.n)
    {
        CDaThuc TG;
        TG.n = BC.n - C.n;
        for (int i = 0; i <= TG.n; i++)
        {
            TG.a[i] = 0;
        }
        TG.a[TG.n] = BC.a[BC.n] / C.a[C.n];
        temp = temp + TG;

        CDaThuc Tru = TG * C;
        BC = BC - Tru;
    }
    return temp;
}

CDaThuc& CDaThuc::operator/=(CDaThuc& A)
{
    CDaThuc temp;
    temp.n = max(n - A.n, 0);
    for (int i = 0; i <= temp.n; i++)
    {
        temp.a[i] = 0;
    }
    CDaThuc BC = *this;
    CDaThuc C = A;
    while (BC.n >= C.n)
    {
        CDaThuc TG;
        TG.n = BC.n - C.n;
        for (int i = 0; i <= TG.n; i++)
        {
            TG.a[i] = 0;
        }
        TG.a[TG.n] = BC.a[BC.n] / C.a[C.n];
        temp = temp + TG;

        CDaThuc Tru = TG * C;
        BC = BC - Tru;
    }
    *this = temp;
    return *this;
}

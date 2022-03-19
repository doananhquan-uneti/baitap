#include <iostream>
#include <string.h>
using namespace std;
void nhapmang(int a[], int &n);
void xuatmang(int a[], int n);
void xuatmangnguoc(int a[], int n);
void max(int a[], int n);
void min(int a[], int n);
float tb(int a[], int n);
void sole(int a[], int n);
void sochan(int a[], int n);
void gtrikhacnhau(int a[], int n);
void tim(int a[], int n);
void phantulonhon(int a[], int& n);
void phantunhohon(int a[], int& n);
int main()
{
	int n, a[100];
	cout << "Nhap n ";
	cin >> n;
	nhapmang(a, n);
	cout << "Cac phan tu cua mang la: ";
	xuatmang(a, n);
	xuatmangnguoc(a, n);
	max(a, n);
	min(a, n);
	tb(a, n);
	sole(a, n);
	sochan(a, n);
	cout << "Nhap phan tu can tim: "; cin >> n;
	tim(a, n);
	phantulonhon(a, n);
	phantunhohon(a, n);
}

void nhapmang(int a[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]= "; cin >> a[i];
	}
}
void xuatmang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
void xuatmangnguoc(int a[], int n)
{
	cout << "Mang nguoc: ";
	for (int i = n - 1; i >= 0; i -- )
		cout << a[i]<<" ";
	cout << endl;
}
void max(int a[], int n)
{
	int vt=0;
	int max1 = a[0];
	cout << "Gia tri lon nhat trong mang la: ";
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max1)
		{
			max1 = a[i];
			vt = i;
		}

	}
	cout << max1 << endl;
	cout << "vi tri la: " << "a[" << vt << "]" << endl;
}
void min(int a[], int n)
{
	int vt=0;
	int min1 = a[0];
	cout << "Gia tri nho nhat trong mang la: ";
	for (int i = 0; i < n ; i++)
		{
		
		if (a[i] < min1)
		{
			min1 = a[i];
			vt = i;
		}

		}
	cout << min1 << endl;
	cout << "vi tri la: " << "a["<<vt<<"]" << endl;
}
float tb(int a[], int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
	}
	float trungbinh = sum / n;
	cout << "trung binh cua mang la:" << trungbinh << endl;
	return trungbinh;
}
void sole(int a[], int n)
{
	cout << "cac so le cua day la: ";
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 1)
			cout << a[i]<<" ";
	cout << endl;

}
void sochan(int a[], int n)
{
	cout << "cac so chan cua day la: ";
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			cout << a[i] << " ";
	cout << endl;
}
void tim(int a[], int n)
	{
	cout << "Phan tu can tim la: ";
		for (int i = 0; i < n; i++)
		{
			if (a[i] == n)
			{
				cout << "a[" << i << "]= " << a[i] << " ";
			}
		}
		cout << endl;
	}
void phantulonhon(int a[], int &n)
	{
	cout << "Nhap N: "; cin >> n;
		cout << "Phan tu lon hon so nhap vao la: ";
		for (int i = 0; i < n; i++)
		{
			if (a[i] > n)
			{
				cout << "a[" << i << "]= " << a[i] << " ";
			}
		}
	}
void phantunhohon(int a[], int &n)
{
	cout << "Nhap N: "; cin >> n;
	cout << "Phan tu nho hon so nhap vao la: ";
	for (int i = 0; i < n; i++)
	{
		if (a[i] < n)
		{
			cout << "a[" << i << "]= " << a[i] << " ";
		}
	}
	cout << endl;
}

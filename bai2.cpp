#include <iostream>
using namespace std;
void nhap(int a[10][10], int &m, int &n);
void xuat(int a[10][10], int m, int n);
int main()
{
	int a[10][10];
	int m, n, p, q;
	cout << "Nhap vao ma tran 1: " << endl;
	cout << "Nhap so hang "; cin >> m;
	cout << "Nhap nhap so cot "; cin >> n;
	nhap(a, m, n);
	xuat(a, m, n);
	cout << "Nhap vao ma tran 2: " << endl;
	cout << "Nhap so hang "; cin >> p;
	cout << "Nhap nhap so cot "; cin >> q;
	nhap(a, p, q);
	xuat(a, p, q);

}
void nhap(int a[10][10], int &m, int &n)
{
	for (int i=0;i<m;i++)
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "]" << "[" << j << "]= ";
			cin >> a[i][j];
		}
	cout << endl;
}
void xuat(int a[10][10], int m, int n)
{
	cout << "Ma tran vua nhap: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j]<<"   ";
		}
		cout << endl;
	}

}
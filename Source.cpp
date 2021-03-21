#include <stdio.h>
#include <conio.h>
#include <math.h>
#define MAX 100
//Bài 1_BTC2

void nhap(float a[], int &n)
{
	do
	{
		printf("\nNhap so phan tu: ");
		scanf_s("%d", &n);
		if (n <= 0 || n > MAX)
		{
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
		}
	} while (n <= 0 || n > MAX);
	for (int i = 0; i < n; i++)
	{
		printf("\nNhap a[%d]: ", i);
		scanf_s("%f", &a[i]);
	}
}

void xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%8.3f", a[i]);
	}
}

//câu 1
//void lietkechan(int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] % 2 == 0)
//		{
//			printf("%4d", a[i]);
//		}
//	}
//}
//câu 2
void lietkecacvitriam(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			printf("%4d", i);
		}
	}
}
//câu 3
float lonnhat(float a[], int n)
{
	float ln = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > ln)
		{
			ln = a[i];
		}
	}
	return ln;
}
float duongdautien(float a[], int n)
{
	for (int i = 0; i<n; i++)
	{
		if (a[i]>0)
		{
			return a[i];
		}
	}
	return -1;
}
int main()
{
	int n;
	float a[MAX];

	nhap(a, n);
	xuat(a, n);

	/*float x = lonnhat(a, n);*/
	/*printf("\nPhan tu lon nhat trong mang la %.3f%", x);*/

	float duongdau = duongdautien(a, n);
	printf("\nGia tri duong dau tien la %.3f", duongdau);

	/*printf("\nCac gia tri chan trong mang la: ");
	lietkechan(a, n);*/

	_getch();
	return 0;
}
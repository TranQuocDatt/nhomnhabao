#include "stdio.h"
#include "conio.h"

#define MAX_SIZE 100

int NhapMang(int n, int arr[]);
int XuatMang(int n, int arr[]);
int TinhTongDeQuy(int n, int arr[]);

int main()
{
	int n, tong;
	int arr[MAX_SIZE];
	printf("Nhap n :"); scanf("%d", &n);
	printf("n = %d", n);
	NhapMang(n, arr);
	XuatMang(n, arr);
	tong  = TinhTongDeQuy(n, arr);
	printf("\nTong: %d", tong);
	getch();
	return 0;
}

int TinhTongDeQuy(int n, int arr[])
{
	int tong = 0;
	if (n == 1)
	{
		tong = arr[0];
	}
	else
	{
		tong = arr[n-1] + TinhTongDeQuy(n-1, arr);
	}
	return tong;
}

int NhapMang(int n, int arr[])
{
	for(int i = 0; i < n; i++)
	{
		printf("Nhap phan tu thu %d: ", i); 
		scanf("%d", &arr[i]);
	}
}

int XuatMang(int n, int arr[])
{
	for(int i = 0; i < n; i++)
	{
		printf(" - %d - ", arr[i]);
	}
}

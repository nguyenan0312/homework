// ConsoleApplication6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<string>
#include<string.h>
#include<stdlib.h>
#include<iostream>

#define max 100
using namespace std;
void Nhap(int a[],int n)
{
	
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a [" << i << "]: " ;
		cin >> a[i];
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}
void Chan(int a[], int n)
{
	cout<<endl << "In ra so chan : ";
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			cout << a[i] << " ";
		}
	}
}
void Le(int a[], int n)
{
	cout<<endl << "In ra so le : ";
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			
			cout << a[i] << " ";
		}
	}
}
int Tong(int a[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + a[i];
	}
	cout <<endl<< "Tong bang = " << sum << endl;
	return sum;
}
void Swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
void raiseup(int a[], int n)
{
	cout << endl << "Sap xep tang dan: ";
	for (int i = 0; i < n-1; i++)
	{
		for (int  j = i+ 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				Swap(a[i], a[j]);
			}
		}
	}
	Xuat(a, n);
}
void raisedown(int a[], int n)
{
	cout << endl << "Sap xep giam dan: ";
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				Swap(a[i], a[j]);
			}
		}
	}
	Xuat(a, n);
}
int main()
{
	/*char *a = new char;
	cin.getline(a, 50);
	char  *p;
	p = strtok(a, " ");
	cout << p;*/
	int a[max],n;
	cout << "Nhap n: ";
	cin >> n;
	Nhap(a, n);
	Xuat(a, n);
	cout << endl;
	Chan(a, n);
	Le(a, n);
	Tong(a, n);
	cout << endl;
	raiseup(a, n);
	cout << endl;
	raisedown(a, n);
    return 0;
}


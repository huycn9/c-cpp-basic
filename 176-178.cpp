#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;
/*
B�i 176: H�y li?t k� c�c s? �m trong m?ng 1 chi?u c�c s? th?c*/
void bai176(int a[],int n)
{
		for(int i=0;i<n;i++)
			{
	if(a[i]<0)
	{
	cout<<a[i]<<" ";
	}
	}
	}
/*B�i 177: H�y li?t k� c�c s? trong m?ng 1 chi?u c�c s? th?c thu?c do?n [x, y] cho tru?c*/
void bai177(int a[],int n,int x,int y)
{

		for(int i=0;i<n;i++)
			{
	if(a[i]<=y&&a[i]>=x)
	{
	cout<<a[i]<<" ";
	}
	}
	}
/*B�i 178: H�y li?t k� c�c s? ch?n trong m?ng 1 chi?u c�c s? nguy�n thu?c do?n [x, y] cho tru?c (x, y l� c�c s? nguy�n)

*/
void bai178(int a[],int n,int x,int y)
{
	
		for(int i=0;i<n;i++)
			{
	if(a[i]<=y&&a[i]>=x&&a[i]%2==0)
	{
	cout<<a[i]<<" ";
	}
	}
	}
		int main()
		{
			srand(time(NULL));
			int a[10001];
			int n;
			int x,y;

			cin>>n;
				cin>>x>>y;
			for(int i=0;i<n;i++)
			{
				a[i]=rand()%200+-55;
				}
				for(int i=0;i<n;i++)
			{
				cout<<a[i]<<" ";
				}
				cout<<"\n";
				bai176(a,n);
								cout<<"\n";
				bai177(a,n,x,y);
								cout<<"\n";
				bai178(a,n,x,y);
	return 0;
	}

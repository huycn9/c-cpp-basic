#include<iostream>
#include<map>
#include<time.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;
//Bài 234: Cho 2 m?ng a, b. Ð?m s? lu?ng giá tr? ch? xu?t hi?n 1 trong 2 m?ng
//Bài 235: Cho 2 m?ng a, b. Li?t kê các giá tr? ch? xu?t hi?n 1 trong 2 m?ng
void bai234235(int a[],int b[],int m,int n)
{
	int dem;
	map<int,int> flaga;
	map<int,int> flagb;
	for(int i=0;i<n;i++)
	{
		flaga[a[i]]=0;
	}
	for(int j=0;j<m;j++)
		{
			flagb[b[j]]=0;
		}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(b[j]==a[i])
			{
				flagb[b[j]]=1;
				flaga[a[i]]=1;
			}
		}
	}
	cout<<"\nNhung phan tu chi xuat hien trong mang A: \n";
	for(int i=0;i<n;i++)
	{
		if(flaga[a[i]]==0){
			cout<<a[i]<<" ";
			dem++;
		}
	}
	cout<<"\nNhung phan tu chi xuat hien trong mang B: \n";
	for(int j=0;j<m;j++)
	{
		if(flagb[b[j]]==0){
			cout<<b[j]<<" ";
			dem++;
		}
	}
	cout<<"\nSo phan tu chi o 1 trong 2 mang la: "<<dem<<"\n";
}


int main()
{
	srand(time(NULL));
	int a[10001];
	int b[10001];
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
	a[i]=rand()%50+(-25);
	}
	for(int i=0;i<m;i++)
	{
	b[i]=rand()%50+(-25);
	}
	cout<<"\nMang A:\n";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
cout<<"\nMang B:\n";
	for(int i=0;i<m;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<"\n";
	bai234235(a,b,m,n);
	
return 0;
}

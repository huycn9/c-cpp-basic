#include<iostream>
#include<map>
#include<time.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;
//B�i 230: Li?t k� t?n su?t xu?t hi?n c�c gi� tr? trong m?ng (m?i gi� tr? li?t k� 1 l?n)
void bai230(int a[],int n)
{
	
	cout<<"\nBai 230: \n";
	map<int,int> dem;
	for(int i=0;i<n;i++)
	{
		dem[a[i]]++;
}
	for(int i=0;i<n;i++)
	{
	if(dem[a[i]]>0){
		cout<<setw(2)<<a[i]<<" xuat hien "<<dem[a[i]]<<" lan\n";
	}
	if(dem[a[i]]>1){
		dem[a[i]]=0;
	}
	}
	
}
//B�i 232: H�y li?t k� c�c gi� tr? xu?t hi?n trong d�y qu� 1 l?n. Luu �: m?i gi� tr? li?t k� 1 l?n
void bai232(int a[],int n)
{
		cout<<"\nBai 232: \n";
	map<int,int> dem;
	for(int i=0;i<n;i++)
	{
		dem[a[i]]++;
}
for(int i=0;i<n;i++)
{
	if(dem[a[i]]>1)
	{
		cout<<setw(2)<<a[i]<<" xuat hien "<<dem[a[i]]<<"lan\n";
		dem[a[i]]=0;
	}
}
}
int main()
{
	srand(time(NULL));
	int a[10001];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	a[i]=rand()%10+(-5);
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
bai230(a,n);
bai232(a,n);
return 0;
}

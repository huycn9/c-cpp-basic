#include<bits/stdc++.h>
#define nhap(n) cin>>n;
using namespace std;
int max(int a,int b);
void nhapmang(int a[],int n);
int lengthmin(int a[],int n);
void print(int a[],int n);
int min(int a,int b);
main()
{
	int n;
	nhap(n);
	int a[n];
	nhapmang(a,n);
	cout<<lengthmin(a,n);
}
int min(int a,int b)
{
	return a<b?a:b;
}
void nhapmang(int a[],int n)
{
	for(int i=0;i<n;i++) nhap(a[i]);
}
int lengthmin(int a[],int n)
{
int l[n];
l[0]=0;
l[1]=abs(a[0]-a[1]);
for(int i=2;i<n;i++) l[i]=min(l[i-1]+abs(a[i]-a[i-1]),l[i-2]+abs(a[i]-a[i-2]));
return l[n-1];
}
void print(int a[],int n)
{
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
int max(int a,int b)
{
	return a>b?a:b;
}

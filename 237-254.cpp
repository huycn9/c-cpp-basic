#include<iostream>
#include<map>
#include<time.h>
#include<stdlib.h>
#include<iomanip>
#include<math.h>
using namespace std;
/*B�i 237 + 238(*): H�y li?t k� c�c gi� tr? c� s? l?n xu?t hi?n nhi?u nh?t trong m?ng*/
void bai237238(int a[],int n)
{
map<int,int> flag;
for(int i=0;i<n;i++)
{
flag[a[i]]++;
}
int most=flag[a[0]];
for(int i=0;i<n;i++)
{
if(flag[a[i]]>most)
{
most=flag[a[i]];
}
}
for(int i=0;i<n;i++)
{
if(flag[a[i]]==most)
{
	cout<<a[i]<<" xuat hien "<<flag[a[i]]<<" lan\n";
	flag[a[i]]=0;
}
}
}
void xuat(int a[],int n)
{
cout<<"\n";	
for(int i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
cout<<"\n";
}


/*B�i 239: H�y d?m s? lu?ng s? nguy�n t? ph�n bi?t trong m?ng*/
bool snt(int n)
{
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++)
	
		if(n%i==0) return false;
	return true;
}
void bai239(int a[],int n)
{
	int dem=0;
map<int,int> flag;
for(int i=0;i<n;i++)
{
flag[a[i]]++;
}
for(int i=0;i<n;i++)
{
if(flag[a[i]]==1&&snt(a[i])==1)
{
	dem++;
	}	
}
cout<<"\nSo luong so nguyen to doc lap la: "<<dem<<"\n";
}
/*B�i 240: Ki?m tra m?ng c� gi� tr? 0 hay kh�ng? C� tr? v? 1, kh�ng c� tr? v? 0
*/
int bai240(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==0){
			return 1;
		}
	}
	return 0;
}
/*
B�i 241: Ki?m tra m?ng c� 2 gi� tr? 0 li�n ti?p hay kh�ng? C� tr? v? 1, kh�ng c� tr? v? 0*/
int bai241(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		if(a[i]==0&&a[i+1]==0){
			return 1;
		}
	}
	return 0;
}
/*B�i 242: Ki?m tra m?ng c� s? ch?n hay kh�ng? C� tr? v? 1, kh�ng c� tr? v? 0*/
int bai242(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		if(a[i]%2==0){
			return 1;
		}
	}
	return 0;
}
/*B�i 243: Ki?m tra m?ng c� s? nguy�n t? hay kh�ng? C� tr? v? 1, kh�ng c� tr? v? 0/*/
int bai243(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		if(snt(a[i])==1){
			return 1;
		}
	}
	return 0;
}
/*B�i 244: Ki?m tra m?ng th?a t�nh ch?t: m?ng kh�ng c� s? ho�n thi?n l?n hon 256. C� tr? v? 1, kh�ng c� tr? v? 0/*/
bool sht(int n)
{
	int sum=0;
	for(int i=1;i<n;i++)
	{
	sum+=i;
	}
	if(sum==n) return 1;
	return 0;
}
int bai244(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		if(sht(a[i])==1&&a[i]>256){
			return 1;
		}
	}
	return 0;
}
/*B�i 245: Ki?m tra m?ng c� to�n s? ch?n kh�ng? C� tr? v? 1, kh�ng c� tr? v? 0*/
int bai245(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		if(a[i]%2!=0){
			return 0;
		}
	}
	return 1;
}
/*B�i 246: Ki?m tra m?ng c� d?i x?ng kh�ng? C� tr? v? 1, kh�ng c� tr? v? 0*/
bool sdx(int n)
			{
				int t=n;
		int k=0;
		do{
			k*=10;
			k=k+(n%10);
			n=n/10;
		}
		while(n>0);
		if(k==t) return true;
		return false;
		}
		int bai246(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		if(sdx(a[i])==1){
			return 1;
		}
	}
	return 0;
}
/*B�i 247: Ta d?nh nghia 1 m?ng c� t�nh ch?t l?, khi t?ng c?a 2 ph?n t? li�n ti?p lu�n l� l?.
 Ki?m tra m?ng c� t�nh ch?t l? hay kh�ng*/
 void bai247(int a[],int n)
 {
 	int mang=1;
 	for(int i=0;i<n-1;i++)
 	{
 		if((a[i]+a[i+1])%2==0){
 			mang=0;
		 }
	 }
	 if(mang==1){
	 	cout<<"\nmang le\n";
	 }
	 else{
	 	cout<<"\nmang chan\n";
	 }
 }
/*B�i 248: Ki?m tra m?ng c� tang d?n hay kh�ng*/
void bai248(int a[],int n)
 {
 	int check=0;
 	for(int i=0;i<n-1;i++)
 	{
 	if(a[i]>=a[i+1]){
 		check=1;
	 }	
 }
 if(check==0){
 	cout<<"\nMang tang dan\n";
 }
 else{
 	cout<<"\nMang khong tang dan\n";
 }
}
/*B�i 249: Ki?m tra m?ng c� gi?m d?n hay kh�ng*/
void bai249(int a[],int n)
 {
 	int check=0;
 	for(int i=0;i<n-1;i++)
 	{
 	if(a[i]<=a[i+1]){
 		check=1;
	 }	
 }
 if(check==0){
 	cout<<"\nMang giam dan\n";
 }
 else{
 	cout<<"\nMang khong giam dan\n";
 }
}
/*B�i 250: H?y cho bi?t c�c ph?n t? trong m?ng c� l?p th�nh c?p s? c?ng hay kh�ng? N?u c� ch? ra c�ng sai d*/
void bai250(int a[],int n)
 {
 	int test=0;
 int d=a[1]-a[0];
 for(int i=0;i<n-1;i++)
 {
 	if((a[i+1]-a[i])!=d){
 		test=1;
	 }
 }
 if(test==0){
 	cout<<"Cap so cong cong sai = "<<d<<"\n";
 }
 else{
 	cout<<"Khong lap csc\n";
 }
 }
/*B�i 251: H�y cho bi?t c�c ph?n t? trong m?ng c� b?ng nhau kh�ng*/
void bai251(int a[],int n)
 {
 int test=0;
 for(int i=0;i<n;i++)
 {
 if(a[i]!=a[0]){
 	test=1;
 }	
 }
 if(test==1){
 	cout<<"No\n";
 }
 else{
 	cout<<"Yes\n";
 }
 }
/*B�i 252: Ta d?nh nghia 1 m?ng du?c g?i l� d?ng song, 
khi ph?n t? c� tr? s? I l?n hon ho?c nh? hon 2 ph?n t? xung quanh.
 H�y vi?t h�m ki?m tra m?ng c� d?ng s�ng kh�ng*/
 void bai252(int a[],int n)
 {
 int test=0;
 for(int i=1;i<n-1;i++)
 {
 if(a[i]>a[i+1]&&a[i]>a[i-1]||a[i]<a[i+1]&&a[i]<a[i-1]){
 	test=1;
 }	
 }
 if(test==0){
 	cout<<"No\n";
 }
 else{
 	cout<<"Yes\n";
 }
 }
/*B�i 253: H�y cho bi?t t?t c? c�c ph?n t? trong m?ng a c� n?m trong m?ng b kh�ng*/
int bai253(int a[],int b[],int n)
{
		int dem=0;
	for(int i=0;i<n;i++){
	bool check=0;	
		for(int j=0;j<5;j++){
			if(b[j]==a[i])
		{
			check=1;
		}
	}
		if(check==0) {
		return 0;
		}
			}
			
			return 1;
		}
//B�i 254: H�y d?m gi� tr? trong m?ng th?a: l?n hon t?t c? c�c gi� tr? d?ng d?ng tru?c n�*/
void bai254(int a[],int n)
{
	int dem=0;
	
	for(int i=n-1;i>0;i--)
	{
		int test=0;
		for(int j=0;j<i;j++)
		{
			if(a[j]>a[i])
			{
				test=1;
			}
		}
		if(test==0){
			dem++;
		}
	}
	cout<<"so gia tri > cac phan tu truoc no la: "<<dem<<"\n";
}
int main()
{
	srand(time(NULL));

	int a[10001];
	int b[5]={1,2,3,4,5};
int n;
cin>>n;
for(int i=0;i<n;i++)
	{
cin>>a[i];
	}
	xuat(a,n);
	
//bai237238(a,n);
//bai239(a,n);
//cout<<"\nBai 240: "<<bai240(a,n)<<"\n";
//cout<<"\nBai 241: "<<bai241(a,n)<<"\n";
//cout<<"\nBai 242: "<<bai242(a,n)<<"\n";
//cout<<"\nBai 243: "<<bai243(a,n)<<"\n";
//cout<<"\nBai 244: "<<bai244(a,n)<<"\n";
//cout<<"\nBai 245: "<<bai245(a,n)<<"\n";
//cout<<"\nBai 246: "<<bai246(a,n)<<"\n";
//bai247(a,n);
//bai248(a,n);
//bai249(a,n);
//bai250(a,n);
//bai251(a,n);
//bai252(a,n);
//cout<<bai253(a,b,n);
//bai254(a,n);
	return 0;
}

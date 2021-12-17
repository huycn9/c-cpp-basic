#include<iostream>
#include<map>
#include<time.h>
#include<stdlib.h>
#include<iomanip>
#include<math.h>
using namespace std;
/*Bài 237 + 238(*): Hãy li?t kê các giá tr? có s? l?n xu?t hi?n nhi?u nh?t trong m?ng*/
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


/*Bài 239: Hãy d?m s? lu?ng s? nguyên t? phân bi?t trong m?ng*/
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
/*Bài 240: Ki?m tra m?ng có giá tr? 0 hay không? Có tr? v? 1, không có tr? v? 0
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
Bài 241: Ki?m tra m?ng có 2 giá tr? 0 liên ti?p hay không? Có tr? v? 1, không có tr? v? 0*/
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
/*Bài 242: Ki?m tra m?ng có s? ch?n hay không? Có tr? v? 1, không có tr? v? 0*/
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
/*Bài 243: Ki?m tra m?ng có s? nguyên t? hay không? Có tr? v? 1, không có tr? v? 0/*/
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
/*Bài 244: Ki?m tra m?ng th?a tính ch?t: m?ng không có s? hoàn thi?n l?n hon 256. Có tr? v? 1, không có tr? v? 0/*/
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
/*Bài 245: Ki?m tra m?ng có toàn s? ch?n không? Có tr? v? 1, không có tr? v? 0*/
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
/*Bài 246: Ki?m tra m?ng có d?i x?ng không? Có tr? v? 1, không có tr? v? 0*/
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
/*Bài 247: Ta d?nh nghia 1 m?ng có tính ch?t l?, khi t?ng c?a 2 ph?n t? liên ti?p luôn là l?.
 Ki?m tra m?ng có tính ch?t l? hay không*/
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
/*Bài 248: Ki?m tra m?ng có tang d?n hay không*/
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
/*Bài 249: Ki?m tra m?ng có gi?m d?n hay không*/
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
/*Bài 250: H?y cho bi?t các ph?n t? trong m?ng có l?p thành c?p s? c?ng hay không? N?u có ch? ra công sai d*/
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
/*Bài 251: Hãy cho bi?t các ph?n t? trong m?ng có b?ng nhau không*/
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
/*Bài 252: Ta d?nh nghia 1 m?ng du?c g?i là d?ng song, 
khi ph?n t? có tr? s? I l?n hon ho?c nh? hon 2 ph?n t? xung quanh.
 Hãy vi?t hàm ki?m tra m?ng có d?ng sóng không*/
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
/*Bài 253: Hãy cho bi?t t?t c? các ph?n t? trong m?ng a có n?m trong m?ng b không*/
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
//Bài 254: Hãy d?m giá tr? trong m?ng th?a: l?n hon t?t c? các giá tr? d?ng d?ng tru?c nó*/
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

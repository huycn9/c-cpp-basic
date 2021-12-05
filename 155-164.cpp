#include<iostream>
#include<cmath>
#include<stdlib.h>
#include<time.h>
using  namespace std;
int bai155(int a[],int n,int x){
	int max=abs(x-a[0]);
for(int i=0;i<n;i++){
	if(abs(x-a[i])>max){
	max=abs(x-a[i]);
	}
}
for(int i=0;i<n;i++){
	if(abs(x-a[i])==max) return a[i];}}
int bai156(int a[],int n,int x){
int min=abs(x-a[0]);
for(int i=0;i<n;i++){
	if(abs(x-a[i])<min){
	min=abs(x-a[i]);
	}
}
for(int i=0;i<n;i++){
	if(abs(x-a[i])==min) return a[i];}
}
void bai157(int a[],int n){
int c=a[0];
int b=a[0];
for(int i=0;i<n;i++){
	if(a[i]>b){
	b=a[i];
	}
}
for(int i=0;i<n;i++){
	if(a[i]<c){
	c=a[i];
	}
}
cout<<"Khoang can tim la: ["<<c<<","<<b<<"]";}
void bai158(int a[],int n){
	cout<<"\n";
int c=a[0];
int b=a[0];
for(int i=0;i<n;i++){
	if(a[i]>b){
	b=a[i];
	}
}
for(int i=0;i<n;i++){
	if(a[i]<c){
	c=a[i];
	}
}
if(abs(b)>abs(c)){
cout<<"Khoang ["<<-abs(b)<<","<<abs(b)<<"]";
}
else{
	cout<<"Khoang ["<<-abs(c)<<","<<abs(c)<<"]";
}
}
int bai159(int a[],int n){
for(int i=0;i<n;i++){
if(a[i]>2003){
	return a[i];
}}
return -1;
}
int bai160(int a[],int n){
for(int i=n;i>=0;i--){
if(a[i]>-1&&a[i]<0){
	return a[i];
}}
return -1;
}
int bai161(int a[],int n,int x,int y){
for(int i=0;i<=n-1;i++){
	if(a[i]>=x&&a[i]<=y){
		return a[i];
}}
return -1;}
int bai162(int a[],int n){
for(int i=1;i<n;i++){
if(a[i]==(a[i-1])*(a[i+1])) return i;
}
return -1;}
bool scp(int n){
if(n==0||n==1) return 1;
for(int i=n;i>=sqrt(n);i--)
if(n%i==0&&i*i==n) return 1;
return 0;
}
int bai163(int a[],int n){
for(int i=0;i<n;i++){
if(scp(a[i])==1) return a[i];
}
return -1;
}
bool soganh(int n){
	if(n<10) return false;
int sg=0;
int t=n;
do{
	sg*=10;
	sg=sg+(n%10);
	n=n/10;
}
while(n!=0);
if(sg==t) return true;
return false;
}
int bai164(int a[],int n){
for(int i=0;i<n;i++){
if(soganh(a[i])==1){
return a[i];
}
}
return -1;
}
int main(){
	srand(time(NULL));
int a[1000];
int n;
cin>>n;
int x=0;int y=99;
for(int i=0;i<n;i++){
a[i]=rand()%(1000)+-99;
}
cout<<"Array: \n";
for(int i=0;i<n;i++){
cout<<a[i]<<" ";
}
cout<<"\n";
cout<<" gia tri trong mang các so thuc xa giá tri x nhat la: "<<bai155(a,n,x)<<endl;
cout<<" gia tri trong mang các so thuc gan giá tri x nhat la: "<<bai156(a,n,x)<<endl;
bai157(a,n);
bai158(a,n);
cout<<"\nGia tri dau tien >2003: "<<bai159(a,n)<<endl;
cout<<"\nGia tri am cuoi cung >-1: "<<bai160(a,n)<<endl;
cout<<"\nGia tri dau tien trong ["<<x<<","<<y<<"] la: "<<bai161(a,n,x,y);
cout<<"\nVi tri do la: a["<<bai162(a,n)<<"]";
cout<<"\nSo chinh phuong dau tien: "<<bai163(a,n);
cout<<"\nSo ganh dau tien la: "<<bai164(a,n);

return 0;
}



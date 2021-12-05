#include<iostream>
using namespace std;
void nhap(int a[],int n){
for(int i=0;i<n;i++){
cin>>a[i];
}
}
void xuat(int a[],int n){
	cout<<"Matrix: \n";
for(int i=0;i<n;i++){
cout<<a[i]<<" ";
}
}
void chan(int a[],int n){
	cout<<"\nso chan trong ma tran: \n";
for(int i=0;i<n;i++){
if(a[i]%2==0){
cout<<a[i]<<" ";
}
}
}
void am(int a[],int n){
cout<<"\nVi tri cac so am la: \n";
for(int i=0;i<n;i++){
if(a[i]<0){
cout<<"a["<<i<<"]"<<" ";
}
}
}
int main(){
int a[1000];
int n;
cin>>n;
nhap(a,n);
cout<<"\n";
xuat(a,n);
chan(a,n);
am(a,n);
return 0;
}


//B�i 125: Vi?t h�m d?m s? lu?ng s? nguy�n t? nh? hon 100 trong m?ng
//B�i 126: Vi?t h�m t�nh t?ng c�c gi� tr? �m trong m?ng 1 chi?u c�c s? th?c
//B�i 127: Vi?t h�m s?p x?p m?ng 1 chi?u c�c s? th?c tang d?n
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<cmath>
using namespace std;
//125
bool snt(int n){
if(n<2) return false;
for(int i=2;i<=sqrt(n);i++) if(n%i==0) return false;
return true;
}
int count(int a[], int n){
int dem;
for(int i=0;i<n;i++){
	if(snt(a[i])==true&&a[i]<100){
		dem++;
}}
return dem;}
//126
int sum126(int a[], int n){
	int sum=0;
for(int i=0;i<n;i++){
if(a[i]<0){
sum+=a[i];
}
}
return sum;
}
//127
void sapxep(int a[],int n){
cout<<"\nSort Matrix: \n";
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
	if(a[i]>a[j]){
	int z=a[j];
	a[j]=a[i];
	a[i]=z;
	}
}
}
for(int i=0;i<n;i++){
cout<<a[i]<<" ";
}}
int main(){
	srand(time(NULL));
	int n;
	cin>>n;
int a[100];
for(int i=0;i<n;i++){
	a[i]=rand()%(120)+(-10);
}
for(int i=0;i<n;i++){
cout<<a[i]<<" ";
}
cout<<"\n";
cout<<"125: "<< count(a,n)<<"\n";
cout<<"126: "<<sum126(a,n)<<"\n";
cout<<"127: \n";
sapxep(a,n);
		 return 0;
		 }

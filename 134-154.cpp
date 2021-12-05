#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<cmath>
using namespace std;
//
void bai134(int a[],int n){
	cout<<"\n";
	int max=a[0];
	for(int i=0;i<n;i++){
	if(a[i]>max){
	max=a[i];
	}
	}
	cout<<"Max="<<max;
cout<<"\n";
}
//
void bai135(int a[],int n){
	cout<<"\n";
	for(int i=0;i<n;i++){
	if(a[i]>0){
	cout<<a[i]<<" la so nguyen (+) dau tien";
	break;
	}
	}
cout<<"\n";
}
//
int bai136(int a[],int n){
	cout<<"\n";
	int index=-1;
	for(int i=n-1;i>=0;i--){
	if(a[i]%2==0){
		index=a[i];
		break;
	}}
	return index;
cout<<"\n";
}
//
void bai137(int a[],int n){
	cout<<"\nVi tri co gia tri min: ";
	int min=a[0];
	for(int i=0;i<n;i++){
	if(a[i]<min){
	min=a[i];
	}
	}
	for(int i=0;i<n;i++){
	if(a[i]==min){
		cout<<"a["<<i<<"]"<<" ";
	}}
cout<<"\n";
}
//
int bai138(int a[],int n){
	cout<<"\n";
	int index=-1;
	for(int i=0;i<n;i++){
if(a[i]%2==0){
index=i;
break;
}	
	}
	return index;
cout<<"\n";
}
//
bool sht(int n){
	int sum=0;
for(int i=1;i<n;i++){
	if(n%i==0){
	sum+=i;
	}
}
if(sum==n) return true;
return false;
}
int bai139(int a[],int n){
	cout<<"\n";
	int index=-1;
	for(int i=n-1;i>=0;i--){
	if(sht(a[i])==1){
	index=i;
	break;
	}
	}
	return index;
cout<<"\n";
}
//
void bai140(int a[],int n){
	cout<<"\n";
	int min=-1;
	for(int i=0;i<n;i++){
	if(a[i]>0){
	min=a[i];
	break;
	}
	}
		for(int i=0;i<n;i++){
		if(a[i]>0&&a[i]<min){
		min=a[i];
		}
		}
	cout<<"So (+) nho nhat la: "<<min;
cout<<"\n";
}
//
void bai141(int a[],int n){
	cout<<"\n";
	int min=-1;
	for(int i=0;i<n;i++){
	if(a[i]>0){
	min=a[i];
	break;
	}
	}
		for(int i=0;i<n;i++){
		if(a[i]>0&&a[i]<min){
		min=a[i];
		}
		}
		
	cout<<"Vi tri so (+) nho nhat la: \n";
	for(int i=0;i<n;i++){
	if(a[i]==min){
	cout<<"a["<<i<<"]"<<" ";
	}
	}
cout<<"\n";
}
//142
void bai142(int a[],int n){
cout<<"\n";
int min=a[0];
for(int i=0;i<n;i++){
if(a[i]<min){
min=a[i];
}
}
cout<<"Gia tri nho nhat cua mang la: "<<min;
cout<<"\n";
}
bool snt(int n){
if(n<2) return false;
for(int i=2;i<=sqrt(n);i++)
if(n%i==0) return false;
return true;
}
int bai143(int a[],int n){
cout<<"\n";
for(int i=0;i<n;i++){
if(a[i]%2==0) return a[i];
}
return -1;
cout<<"\n";}
int bai144(int a[],int n){
cout<<"\n";
for(int i=0;i<n;i++){
if(snt(a[i])==1) return a[i];
}
return -1;
cout<<"\n";}
int bai145(int a[],int n){
cout<<"\n";
for(int i=0;i<n;i++){

if(sht(a[i])==1) return a[i];
}
return -1;
cout<<"\n";}
int bai146(int a[],int n){
cout<<"\n";
for(int i=0;i<n;i++){
if(a[i]<0) {
return a[i];
}
}
return -1;
cout<<"/n";}
int bai147(int a[],int n){
cout<<"\n";
for(int i=n-1;i>=0;i--){
if(a[i]>0) return a[i];
}
return -1;
cout<<"\n";}
int bai148(int a[],int n){
cout<<"\n";
for(int i=n-1;i>=0;i--){
if(snt(a[i])==1) return a[i];
}
return -1;
cout<<"\n";}
int bai149(int a[],int n){
cout<<"\n";
for(int i=n;i>=0;i--){

if(sht(a[i])==1) return a[i];
}
return -1;
cout<<"\n";}
int bai150(int a[],int n){
int m;
for(int i=0;i<n;i++){
if(a[i]<0){m=a[i];
break;
}}
for(int i=0;i<n;i++){
	if(a[i]<0&&a[i]>m){
	m=a[i];
	}
}
return m;
return -1;}

int bai151(int a[],int n){
int k;
for(int i=0;i<n;i++){
if(snt(a[i])==1){ k=a[i];
break;
}
}
for(int i=0;i<n;i++){
if(snt(a[i])==1&&a[i]>k){
k=a[i];
}}
return k;
return -1;
}
int bai152(int a[],int n){
int k;
for(int i=0;i<n;i++){
if(sht(a[i])==1){ k=a[i];
break;
}
}
for(int i=0;i<n;i++){
if(sht(a[i])==1&&a[i]<k){
k=a[i];
}}
return k;
return -1;
}
int bai153(int a[],int n){
int min=a[0];
for(int i=0;i<n;i++){
if(a[i]<min&&a[i]%2==0){
min=a[i];
}}
if(min%2==0) return min;
return -1;}
int bai154(int a[],int n){
int min=a[0];
for(int i=0;i<n;i++){
if(a[i]<min&&a[i]<0){
min=a[i];
}
}
for(int i=0;i<n;i++){
if(a[i]==min) return i;
}
return -1;}
int main(){
	srand(time(NULL));
	int a[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	a[i]=rand()%100+(-29);
	}
	cout<<"Matrix: \n";
	for(int i=0;i<n;i++){
	cout<<a[i]<<" ";
	}
	cout<<"\n";
	bai134(a,n);
	bai135(a,n);
	cout<<"So chan cuoi cung trong mang la: " <<bai136(a,n)<<endl;
	bai137(a,n);
		cout<<"\nVi tri so chan dau tien : a["<<bai138(a,n)<<"]"<<endl;
	cout<<"\nVi tri so hoan thien cuoi cung mang la: "<<bai139(a,n)<<endl;
	bai140(a,n);
	bai141(a,n);
	bai142(a,n);
	cout<<"\nSo chan dau tien la: "<<bai143(a,n)<<"\n";
	cout<<"\nSo nguyen to dau tien la: "<<bai144(a,n)<<"\n";
	cout<<"\nSo hoan thien dau tien la: "<<bai145(a,n)<<"\n";
	cout<<"\nSo am dau tien la: "<<bai146(a,n)<<"\n";
	cout<<"\nSo duong cuoi cung la: "<<bai147(a,n)<<"\n";
	cout<<"\nSo nguyen to cuoi cung la: "<<bai148(a,n)<<"\n";
	cout<<"\nSo hoan thien cuoi cung la: "<<bai149(a,n)<<"\n";
	cout<<"\nGia tri am lon nhat la: "<<bai150(a,n)<<"\n";
		cout<<"\nSo nguyen to lon nhat la: "<<bai151(a,n)<<"\n";
		cout<<"\nSo hoan thien nho nhat la: "<<bai152(a,n)<<"\n";
	cout<<"\nSo chan nho nhat la: "<<bai153(a,n)<<"\n";
	cout<<"\nVi tri Gia tri am nho nhat la: "<<bai154(a,n)<<"\n";
	
	
	
	
	
	
	
	
	
return 0;
}

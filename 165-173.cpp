#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;
int firstnum(int k){
if(abs(k)<10){
	return abs(k);
}

while(abs(k)>=10){
	k=(abs(k))/10;
	}
	
return k;}
void xuat(int a[],int n){
cout<<"\nMa Tran: \n";
for(int i=0;i<n;i++){
cout<<a[i]<<" ";
}
cout<<"\n";
}
void bai165(int a[],int n){
for(int i=0;i<n;i++){
if(firstnum(a[i])%2!=0){
cout<<a[i];
break;
}}}
//B�i 166: Cho m?ng 1 chi?u c�c s? nguy�n. 
//H�y vi?t h�m t�m gi� tr? d?u ti�n trong m?ng c� d?ng 2^k.
// N?u m?ng kh�ng c� gi� tr? d?ng 2k th� h�m s? tr? v? 0
bool mu2(int n){
if(n<1) return false;
if(n<3) return true;
	while(n%2==0&&n>2){
		n=n/2;
}
if(n==2) return true;
else return false;
}
int bai166(int a[],int n){
for(int i=0;i<n;i++){
if(mu2(a[i])==1)
return a[i];	
}
return 0;
}
/*B�i 167: H�y t�m gi� tr? th?a di?u ki?n 
to�n ch? s? l? v� l� gi� tr? l?n nh?t th?a di?u ki?n ?y trong m?ng 1 chi?u c�c s? nguy�n
. N?u m?ng kh�ng c� gi� tr? th?a di?u ki?n tr�n th� tr? v? 0
*/
bool testodd(int n){
	int z=abs(n);
if(z<10&&z%2!=0) return true;
if(z<10&&z%2==0) return false;
while(z!=0){
int c=z%10;
if(c%2==0) return false;
z=z/10;
}
return true;
}
int bai167(int a[],int n){
for(int i=0;i<n;i++){
if(testodd(a[i])==1)
return a[i];
}
return 0;
}
/*B�i 168: Cho m?ng 1 chi?u c�c s? nguy�n. 
H�y vi?t h�m t�m gi� tr? l?n nh?t trong m?ng c� d?ng 5^k. 
N?u m?ng khong t?n t?i gi� tr? 5^k th� h�m s? tr? v? 0*/
bool mu5(int n){
if(n==1||n==5) return true;
if(n<5) return false;
	while(n%5==0&&n>5){
		n=n/5;
}
if(n==5) return true;
else return false;
}
int bai168(int a[],int n){
for(int i=0;i<n;i++){
if(mu5(a[i])==1)
return a[i];	
}
return 0;
}
//B�i 169 (*): Cho m?ng 1 chi?u c�c s? nguy�n.
// H�y vi?t h�m t�m s? ch?n nh? nh?t l?n hon m?i gi� tr? c� trong m?ng
int bai169(int a[],int n){
int max=a[0];
for(int i=0;i<n;i++){
	if(a[i]>max)
	max=a[i];
}
if(max%2==0){
return max+2;
}
return max+1;
}
/*
B�i 170: Cho m?ng 1 chi?u c�c s? nguy�n. 
H�y vi?t h�m t�m s? nguy�n t? nh? nh?t l?n hon m?i gi� tr? c� trong m?ng
*/
bool snt(int n){
if(n<2) return false;
for(int i=2;i<=sqrt(n);i++)
	if(n%i==0) return false;
	return true;
}
int bai170(int a[],int n){
int max=a[0];
for(int i=0;i<n;i++){
	if(a[i]>max)
	max=a[i];
}
for(int i=max+1;;i++){
	if(snt(i)==1) return i;
}
}
//B�i 171: Cho m?ng 1 chi?u c�c s? nguy�n. H�y vi?t h�m t�m u?c chung l?n nh?t c?a t?t c? c�c ph?n t? trong m?ng
int bai171(int a[],int n){
int min=a[0];
for(int i=0;i<n;i++){
	if(a[i]<min)
	min=a[i];
}

for(int j=min;j>=1;j--){
int uoc=0;
for(int i=0;i<n;i++){
	if(a[i]%j==0) uoc++;
}
if(uoc==n) return j;
}
}

 

//B�i 172: Cho m?ng 1 chi?u c�c s? nguy�n. H�y vi?t h�m t�m b?i chung nh? nh?t c?a t?t c? c�c ph?n t? trong m?ng
int bai172(int a[],int n){
int max=a[0];
for(int i=0;i<n;i++){
	if(a[i]>max)
	max=a[i];
}
for(long long j=max;;j++){
	int boi=0;
	for(int i=0;i<n;i++){
		if(j%a[i]==0){
			boi++;
}
}
if(boi==n) return j;
}
}
//B�i 173 (*): Cho m?ng 1 chi?u c�c s? nguy�n. H�y  vi?t h�m t�m ch? s? xu?t hi?n �t nh?t trong m?ng
//ex: 12 23 34 44 -> 1
void bai173(int a[],int n){
int b[10001];
int min;
for(int i=0;i<n;i++){

	do{
b[a[i]%10]++;
	a[i]=(a[i])/10;
	}
	while(a[i]!=0);
}
for(int j=0;j<10;j++){
if(b[j]!=0){
	min=b[j];
	break;
}
}
for(int j=0;j<10;j++){
if(b[j]!=0&&b[j]<=min){
	min=b[j];
}}
cout<<"Nhung chu so xuat hien it nhat mang: ";
for(int j=0;j<10;j++){
	if(b[j]==min) 
	cout<<j<<" ";
}
cout<<" xuat hien "<<min<<" lan\n";
}
/*
B�i 174 (*): Cho m?ng s? th?c c� nhi?u hon 2 gi� tr? v� c�c gi� tr? trong m?ng kh�c nhau t?ng d�i m?t. 
H�y vi?t h�m li?t k� t?t c? c�c c?p gi� tr? (a, b) trong m?ng th?a di?u ki?n a <= b
*/
void bai174(int a[],int n){
cout<<"Cac cap (a,b) voi a<=b la: \n";
for(int i=0;i<n-1;i++){
	for(int j=n-1;j>i;j--){
		if(a[i]<=a[j]){
		cout<<"("<<a[i]<<","<<a[j]<<")\n";
}
}
}
}
int main(){
	srand(time(NULL));
	int a[10001];
	int n;
	cin>>n;
for(int i=0;i<n;i++){
a[i]=rand()%10+26;
}

xuat(a,n);
bai165(a,n);
cout<<"\n";
cout<<"Gia tri 2^k dau tien la: "<<bai166(a,n)<<"\n";
cout<<"Gia tri dau tien cac chu so le la: "<<bai167(a,n)<<"\n";
cout<<"Gia tri 5^k dau tien la: "<<bai168(a,n)<<"\n";
cout<<"Gia tri chan nho nhat > moi phan tu trong mang: "<<bai169(a,n)<<"\n";
cout<<"So nguyen to nho nhat > moi phan tu la: "<<bai170(a,n)<<"\n";
cout<<"UCLN cua mang: "<<bai171(a,n)<<"\n";
//cout<<"BCNN cua mang: "<<bai172(a,n)<<"\n";
bai173(a,n);

return 0;
}

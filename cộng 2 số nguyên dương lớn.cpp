#include<iostream>
#include<string>
#include<cmath>
#include<bits/stdc++.h>

using namespace std;
void dao(int a[],int n)
{


int l=0;//l=0 
int r=n-1;//r=4
while(l<r)
{
	//0<4
	//52341
	//1<3
	//54321
	//2=2
	//54321
	//9
	//9
	//54321
	//90000
	 
int temp=a[r];
a[r]=a[l];
a[l]=temp;
--r;
++l;
}

}
void sum(string num1,string num2){
	
int size=(num1.size()>num2.size()?num1.size():num2.size());
int n1[size];
int n2[size];
int tong[size];
for(int i=0;i<num1.size();i++) n1[i]=num1[i]-'0';
for(int i=0;i<num2.size();i++) n2[i]=num2[i]-'0';
dao(n1,num1.size());
dao(n2,num2.size());
if(num1.size()<size){
for(int i=num1.size();i<size;i++)
{
n1[i]=0;
}
}

if(num2.size()<size){
	for(int i=num2.size();i<size;i++)
{
n2[i]=0;
}
}
/*cout<<"Dao nguoc 2 so: \n";
for(int i=0;i<size;i++){
cout<<n1[i];
}
cout<<'\n';
for(int i=0;i<size;i++){
cout<<n2[i];
}
cout<<'\n';*/
int nho=0;
for(int i=0;i<size-1;i++){
	

tong[i]=((n1[i]+n2[i]+nho)%10);
//cout<<"\ntong["<<i<<"]="<<tong[i]<<endl;
nho=((n1[i]+n2[i]+nho>9)?1:0);
}
//cout<<"nho= "<<nho<<endl;
tong[size-1]=n1[size-1]+n2[size-1]+nho;
/*cout<<"\ntong["<<size-1<<"]="<<tong[size-1]<<endl;
cout<<endl;
for(int i=0;i<size;i++)
{
cout<<tong[i];
}
cout<<endl;*/
dao(tong,size);
for(int i=0;i<size;i++)
{
cout<<tong[i];
}
//cout<<endl;
}
int main()
{
//	while(true){
string num1,num2;
getline(cin,num1);
fflush(stdin);

getline(cin,num2);
fflush(stdin);
cout<<num1<<'+'<<num2<<'=';
sum(num1,num2);
}
/*

7685
6785
6875
6857
6

*/




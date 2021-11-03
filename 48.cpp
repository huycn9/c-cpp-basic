#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int dem(int n){
int tich=1;

do{
int	t=n%10;
	if(t%2!=0){
	
	tich*=t;}
n=n/10;}
while(n>0);
return tich;
}
int main(){
int n;
cin>>n;
cout<<dem(n);
    return 0;
}

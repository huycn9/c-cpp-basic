#include<iostream>
#include<bits/stdc++.h>
double sum(int x,int n){
	int tong=0;
for(int i=2;i<=2*n;i+=2){
	tong+=pow(x,i);
}
return tong;
}
using namespace std;
int main(){
int x,n;
cin>>x>>n;
cout<<setprecision(5)<<fixed<<sum(x,n);
return 0;
}


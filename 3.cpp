#include<iostream>
#include<bits/stdc++.h>
using namespace std;
double tong(int n){
if(n==1) return 1;
return (1.0/n)+tong(n-1);
}
int main(){
int n;
cin>>n;
cout<<setprecision(4)<<fixed<<tong(n);
return 0;
}

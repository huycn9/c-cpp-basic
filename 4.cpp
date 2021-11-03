#include<iostream>
#include<bits/stdc++.h>
using namespace std;
double sum(int n){
if(n==1) return 0.5;
return (1.0/(2*n))+ sum(n-1);
}
int main(){
int n;
cin>>n;
cout<<setprecision(5)<<fixed<<sum(n);
return 0;
}


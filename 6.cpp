#include<iostream>
#include<bits/stdc++.h>
double sum(int n){
if(n==1) return 0.5;
return 1.0/(n*(n+1)) +sum(n-1);
}
using namespace std;
int main(){
int n;
cin>>n;
cout<<setprecision(5)<<fixed<<sum(n);
return 0;
}


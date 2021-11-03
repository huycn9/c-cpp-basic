#include<iostream>
#include<bits/stdc++.h>
int sum(int n){
if(n==1) return 1;
return n*sum(n-1);
}
using namespace std;
int main(){
int n;
cin>>n;
cout<<setprecision(5)<<fixed<<sum(n);
return 0;
}


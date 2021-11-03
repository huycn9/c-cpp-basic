#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
double sum(int x,int n){
int tong=0;
for(int i=1;i<=n;i++){
	tong+=pow(x,i);
}
return tong;}
using namespace std;
int main(){
int x,n;
cin>>x>>n;

cout<<setprecision(5)<<fixed<<sum(x,n);
return 0;
}


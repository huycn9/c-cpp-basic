#include<iostream>
#include<bits/stdc++.h>
double sum(int x,int n){
double tong =0;
for(int i=1;i<=n;i++){
int tu=pow(x,i);
int mau=0;
for(int j=1;j<=i;j++){
mau+=j;
}
tong+=(tu*1.0/mau);
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


#include<iostream>
#include<bits/stdc++.h>
int sum(int n){
int tong=0;
for(int i=1;i<=n;i++){
	int ans=1;
	for(int j=1;j<=i;j++){
		ans=ans*j;
}
tong+=ans;}
return tong;}
using namespace std;
int main(){
int n;
cin>>n;
cout<<setprecision(5)<<fixed<<sum(n);
return 0;
}


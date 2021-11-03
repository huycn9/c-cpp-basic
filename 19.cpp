#include<iostream>
#include<bits/stdc++.h>
using namespace std;
double sum(int x,int n){
double tong=1;
for(int i=0;i<=n;i++){
	int tu=pow(x,(2*i+1));
	int mau=1;
	for(int j=1;j<=2*i+1;j++){
	mau*=j;
	}
	tong+=(1.0*tu/mau);
}
return tong;
}
int main(){
	int x,n;
	cin>>x>>n;
	cout<<setprecision(5)<<fixed<<sum(x,n);
return 0;
}


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
double sum(int n){
	double tong=1;
	for(int i=0;i<=n;i++){
		tong=1+(1.0/(tong));
	}
	return tong;
}
int main(){
	int n; cin>>n;
	 cout<<sum(n);
	return 0;
}

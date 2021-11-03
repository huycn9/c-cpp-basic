#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int max(int n){
	int gtln;
	if(n==0) return 0;
	do{
		int t=n%10;
		if(t>gtln){
			gtln=t;
		}
		n=n/10;
	}while(n>0);
	return gtln;
}
int main(){
int n;
cin>>n;
cout<<max(n);
    return 0;
}

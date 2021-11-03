#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool scp(int n){
	for(int i=1;i<=n;i++)
	if(1.0*n/i==i) return true;
	return false;
}


int main(){
int n;
cin>>n;
cout<<scp(n);
return 0;
}



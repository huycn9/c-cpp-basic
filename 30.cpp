#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool sht(int n){
	int sum=0;
	for(int i=1;i<n;i++){if(n%i==0){
		sum+=i;
	}
	}
	if(sum==n) return true;
	return false;
}
int main(){
int n;
cin>>n;
cout<<sht(n);
return 0;
}


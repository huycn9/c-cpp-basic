#include<iostream>
#include<bits/stdc++.h>
using namespace std;
double find(int n){
int sum=n;
for(int i=1;i<n;i++){
	sum-=i;
	if(sum<=0){
		return i-1;
		break;
	}
}
}

int main(){
int n;
cin>>n;
cout<<find(n);
    return 0;
}

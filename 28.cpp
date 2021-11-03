#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sum(int n){
	int tong =0;
for(int i=1;i<n;i++){
if(n%i==0) tong+=i;
}
return tong;
} 
int main(){
int n;
cin>>n;
cout<<sum(n);
return 0;
}


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sum(int n){
int tong=0;
do{
	tong+=n%10;
	n=n/10;
}

while(n>0);
return tong;
}
int main(){
int n;
cin>>n;
cout<<sum(n);
    return 0;
}

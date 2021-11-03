#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sum(int n){

while(n>=10){
	n=n/10;
}
return n;
}
int main(){
int n;
cin>>n;
cout<<sum(n);
    return 0;
}

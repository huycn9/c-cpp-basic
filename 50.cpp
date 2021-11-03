#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void dao(int n){
do{
	int t=n%10;
	cout<<t;
	n=n/10;
}
while(n>0);
}
int main(){
int n;
cin>>n;
dao(n);
    return 0;
}

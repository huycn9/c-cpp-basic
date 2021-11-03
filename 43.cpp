#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int dem(int n){
int count=0;
do{
	n=n/10;
	count++;
}
while(n>0);
return count;
}
int main(){
int n;
cin>>n;
cout<<dem(n);
    return 0;
}

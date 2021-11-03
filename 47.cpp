#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int dem(int n){
int count=0;
do{
	int k=n%10;
	if(k%2==0){
		count++;
	}
	n=n/10;
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

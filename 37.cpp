#include<iostream>
#include<bits/stdc++.h>
using namespace std;
double sum(int n){
double sumn=0;
for(int i=2;i<=n;i++){
	sumn=pow(sumn+i,1.0/i);
}
return sumn;
} 
int main(){
int n;
cin>>n;
cout<<setprecision(5)<<fixed<<sum(n);
return 0;
}


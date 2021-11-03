#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
double sum(int n){
double sumn=0;
for(int i=1;i<=n;i++){
	sumn=pow(sumn+i,((1.0)/(1+i)));
}
return sumn;
} 
int main(){
int n;
cin>>n;
cout<<setprecision(5)<<fixed<<sum(n);
return 0;
}


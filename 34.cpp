#include<iostream>
#include<bits/stdc++.h>
using namespace std;
double sum2(int n){
double sum=0;
for(int i=1;i<=n;i++){
	sum=sqrt(sum+i);
}
return sum;
} 
int main(){
int n;
cin>>n;
cout<<sum2(n);
return 0;
}


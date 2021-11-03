#include<iostream>
#include<bits/stdc++.h>
double sum(int x,int n){
if(n==0) return 1;
return x*sum(x,n-1);


}
using namespace std;
int main(){
int x,n;
cin>>x>>n;
cout<<sum(x,n);
return 0;
}


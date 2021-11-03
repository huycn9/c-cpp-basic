#include<iostream>
#include<bits/stdc++.h>
using namespace std;

double hs(int x){
if(x>=5) return 2.0*x*x+5.0*x+9;
return -2.0*x*x+4.0*x-9;
}
int main(){
int x;
cin>>x;
cout<<hs(x);
return 0;
}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
double sum(int x,int n){
double ans=0;
for(int i=1;i<=n;i++){
ans=sqrt(ans+pow(x,i));
}
return ans;
} 
int main(){
int x,n;cin>>x>>n;
cout<<setprecision(5)<<fixed<<sum(x,n);
return 0;
}


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
double sum(int n){
double ans=0;
for(int i=1;i<=n;i++){
	int k=1;
	for(int j=1;j<=i;j++){
		k*=j;
	}
	ans=pow(ans+k,1.0/(1+i));
}
return ans;
} 
int main(){
int n;cin>>n;
cout<<setprecision(5)<<fixed<<sum(n);
return 0;
}


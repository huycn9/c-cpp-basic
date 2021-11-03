#include<iostream>
#include<bits/stdc++.h>
double sum(int n){
	double tong =0;
for(int i=1;i<=n;i++){
	int mau=0;
	for(int j=1;j<=i;j++){
	mau+=j;
	}
	tong+=1.0/mau ;
}
return tong;
}
using namespace std;
int main(){
int n;
cin>>n;
cout<<setprecision(5)<<fixed<<sum(n);
return 0;
}


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int uoc(int n){
	int tich=1;
for(int i=1;i<=n;i++){
	if(n%i==0){
	tich*=i;
	}
}
return tich;}
int main(){
	int n;
	cin>>n;
	cout<<uoc(n);
return 0;

}


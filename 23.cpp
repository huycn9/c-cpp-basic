#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int uoc(int n){
	int count=0;
for(int i=1;i<=n;i++){
	if(n%i==0){
	count++;
	}
}
return count;}
int main(){
	int n;
	cin>>n;
	cout<<uoc(n);
return 0;

}


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void uoc(int n){
for(int i=n;i>=1;i--){
	if(n%i==0&&i%2!=0){
		cout<<i;
		break;
	}
}
} 
int main(){
int n;
cin>>n;
uoc(n);
return 0;
}


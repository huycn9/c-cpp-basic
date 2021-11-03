#include<iostream>
using namespace std;
bool kt3(int n){
	if(n==1) return true;
	
	do{
		if(n%3!=0) return false;
		if(n==3) return true;
		n=n/3;
	}
	while(n>=3);
	return false;
}
int main(){
	int n;cin>>n;
	for(int i=0;i<=n;i++){
		if(kt3(i)==1){
			cout<<i<<" ";
		}
	}
	return 0;
}

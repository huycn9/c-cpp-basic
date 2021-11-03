#include<iostream>
using namespace std;
bool kt2(int n){
	if(n==1) return true;
	if(n<1) return false;
	do{
		if(n%2!=0) return false;
		if(n==2) return true;
		n=n/2;
	}
	while(n>=2);
	return false;
}
int main(){
	int n;cin>>n;
	for(int i=0;i<n;i++){
		if(kt2(i)==1){
			cout<<i<<" ";
		}
	}
	return 0;
}

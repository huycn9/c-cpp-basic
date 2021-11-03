#include<iostream>

using namespace std;
bool ktl(int n){
	if(n<10) {return false;}
	do{
		int n1=n%10;
		int n2=(n/10)%10;
		if(n2<=n1) {return false;}
		n=n/10;
	}
	while(n>=10);
	return true;
	}
int main(){
int n;
cin>>n;
for(int i=1000;i<=9999;i++){
if(ktl(i)==1){
	cout<<i<<endl;
}}
cout<<ktl(n);
return 0;
}


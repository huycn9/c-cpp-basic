#include<iostream>

using namespace std;
bool ktl(int n){
	if(n<10) {return false;}
	do{
		int n1=n%10;
		int n2=(n/10)%10;
		if(n2>=n1){
		return false;
		}
		n=n/10;
	}while(n>0);
return true;
}
int main(){
int n;
cin>>n;
cout<<ktl(n);
return 0;
}


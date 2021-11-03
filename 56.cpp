#include<iostream>

using namespace std;
bool ktl(int n){
if(n==0) return false;
do{
	int t=n%10;
	if(t%2==0) {return false;
	break;}
	n=n/10;
}
while(n>0);
return true;
}
int main(){
int n;
cin>>n;
cout<<ktl(n);
return 0;
}

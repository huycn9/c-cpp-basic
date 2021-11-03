#include<iostream>

using namespace std;
bool ktl(int n){
int k=n;
int t=0;int l;
do{
	l=n%10;
	t=t*10+l;
	n=n/10;
}
while(n>0);
if(t==k) return true;
return false;
}
int main(){
int n;
cin>>n;


cout<<ktl(n);
return 0;
}


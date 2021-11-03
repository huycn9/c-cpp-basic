#include<iostream>
using namespace std;
int min(int n){
	
	if(n==0) return 0;
	int gtnn=n%10;
	do{
		
		int t=n%10;
		if(t<gtnn){
			gtnn=t;
		}
		n=n/10;
		
	}
	while(n>0);
return gtnn;
}
int main(){
	int n;
	cin>>n;
	cout<<min(n);
	return 0;
}

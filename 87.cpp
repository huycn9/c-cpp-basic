#include<iostream>
using namespace std;
int find(int n){
	int sum=0;
	int i=1;
	do{
		if(sum>=n){
			return i-1;
		}
	sum+=i;
	i++;	
	}while(sum>=0);
	
	
}
int main(){
int n;
cin>>n;
cout<<find(n);
	return 0;
}

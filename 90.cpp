#include<iostream>
using namespace std;
int find(int n){
int sum=0;
int i=1;
while(sum<n){
	sum+=i;
	if(sum>=n) return i-1;
	i++;
}

}
int main(){
int n;
cin>>n;
cout<<find(n);
	return 0;
}

#include<iostream>
#include<cmath>
using namespace std;
int giaithua(int n){
int s=1;
for(int i=1;i<=n;i++){
	s*=i;
}
return s;}
double sin(double x,int n){
if(n==0) return x;
return ((pow(-1,n)*pow(x,(2*n+1))*1.0)/giaithua(2*n+1)) + sin(x,n-1);
}
int main(){
	int n=5;
double x;
cin>>x;
cout<<sin(x,n);
return 0;
}

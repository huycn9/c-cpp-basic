#include<iostream>
#include<cmath>
using namespace std;
//B�i 116: Vi?t chuong tr�nh nh?p n v� t�nh t?ng S = 1 + 2 + 3 + � + n
int sum116(int n){
if(n==1) return 1;
return n+sum116(n-1);
}
//B�i 117: Vi?t chuong tr�nh nh?p n v� t�nh t?ng S(n) = x + x^2 + x^3 + � + x^n
int sum117(int x,int n){
if(n==1) return x;
return pow(x,n)+sum117(x,n-1);
}
int main(){
int n,x;
cin>>x>>n;
cout<<"Bai 116: "<<sum116(n);
cout<<"\nBai 117: "<<sum117(x,n);

return 0;
}

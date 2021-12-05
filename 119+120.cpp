#include<iostream>
#include<cmath>
using namespace std;
bool snt(int n){
if(n<2) return false;
for(int i=2;i<=sqrt(n);i++) if(n%i==0) return false;
return true;
}
bool scp(int n){
if(n==0||n==1)return true;
for(int i=n;i>=sqrt(n);i--) if(n%i==0&&i*i==n) return true;
return false;
}
void lk(int n){
	cout<<"So nguyen to <"<<n<<" la: ";
for(int i=0;i<n;i++){
if(snt(i)==true){
cout<<i<<" ";
}
}
cout<<"\nSo chinh phuong <"<<n<<" la: ";
for(int i=0;i<n;i++){
if(scp(i)==true) {
cout<<i<<" ";
}
}
}
int main(){
int n;
cin>>n;
lk(n);

return 0;
}

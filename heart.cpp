#include<iostream>
using namespace std;
void heart(int n);
int main() {
int n;
while(true){
cin>>n;
cout<<endl;
heart(n);
cout<<endl;
}
}















void heart(int n) {
int line=(2*n-1)*2;
for(int i=0; i<line; i++) {
cout<<endl;
//phan dau
if(i<n) {
for(int j=0; j<n-i-1; j++) {
cout<<" ";
}
for(int j=0; j<n+2*i; j++) {
cout<<"*";
}
for(int j=0; j<(n-i-1)*2; j++) {
cout<<" ";
}
for(int j=0; j<n+2*i; j++) {
cout<<"*";
}
} else if(i==n) {
for(int j=0; j<n-(n-1)-1; j++) {
cout<<" ";
}
for(int j=0; j<n+2*(n-1); j++) {
cout<<"*";
}
for(int j=0; j<(n-(n-1)-1)*2; j++) {
cout<<" ";
}
for(int j=0; j<n+2*(n-1); j++) {
cout<<"*";
}
}
//phan duoi
else {
for(int j=n; j<i; j++) {
cout<<" ";
}
for(int j=0; j<6*(n-1)-2*(i-n-1); j++) {
cout<<"*";
}
}
}
}

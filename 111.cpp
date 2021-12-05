#include<iostream>
using namespace std;
void tgcr(int h);
void tgcd(int h);
void tgvr(int h);
void tgvd(int h);
int main(){
int h;
cin>>h;
tgcd(h);
cout<<"\n";
tgcr(h);
cout<<"\n";
tgvr( h);
cout<<"\n";
tgvd(h);
return 0;
}
//
void tgcr(int h){
for(int i=1;i<=h;i++){
if(i==1||i==h){
for(int j=1;j<=h-i;j++){
cout<<" ";
}
for(int j=1;j<=2*i-1;j++){
cout<<"*";
}
}
else{
for(int j=1;j<=h-i;j++){
cout<<" ";}
cout<<"*";
	for(int j=2;j<2*i-1;j++){
cout<<" ";
}
cout<<"*";
}
cout<<endl;
}}
//
void tgcd(int h){
for(int i=1;i<=h;i++){
for(int j=1;j<=h-i;j++){
	cout<<" ";
}
for(int j=1;j<=2*i-1;j++){
cout<<"*";
}
cout<<endl;
}}
//
void tgvr(int h){
for(int i=1;i<=h;i++){
if(i==1||i==h){
for(int j=1;j<=i;j++){
cout<<"*";
}
}
else{
	cout<<"*";
	for(int j=1;j<=i-2;j++){
	cout<<" ";
	}
	cout<<"*";
}
cout<<endl;
}
}
//
void tgvd(int h){
for(int i=1;i<=h;i++){
for(int j=1;j<=i;j++){
cout<<"*";
}
cout<<endl;
}}

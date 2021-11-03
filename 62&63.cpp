#include<iostream>

using namespace std;
void ucln(int a,int b){
for(int i=a;i>=1;i--){
if(a%i==0&&b%i==0){
cout<<i;
break;
}
}
}
void bcnn(int a,int b){
for(int i=a;;i++){
	if(i%a==0&&i%b==0){
	cout<<i;
	break;
	}
}}
int main(){
int a,b;
cin>>a>>b;
cout<<"UCLN:\n";
ucln(a,b);
cout<<"\nBCNN:\n";
bcnn(a,b);
return 0;
}


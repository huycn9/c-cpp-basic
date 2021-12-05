#include<iostream>
using namespace std;
void hcn(int m,int n){
for(int i=1;i<=m;i++){
	for(int j=1;j<=n;j++){
	cout<<"*";
	}
	cout<<endl;
}
cout<<"\n";
for(int i=1;i<=m;i++){
	if(i==1||i==m){
	for(int j=1;j<=n;j++){
	cout<<"*";
	}
	}
	else{
	
	cout<<"*";
	for(int j=2;j<n;j++){
	cout<<" ";
	}
	cout<<"*";}
	cout<<endl;
}
}
int main(){
int m,n;
cin>>m>>n;
hcn(m,n);
return 0;
}

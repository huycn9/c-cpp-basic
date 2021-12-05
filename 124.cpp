#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void test(int a[],int n){
for(int i=0;i<n;i++){
if(a[i]%2==0&&a[i]<2004){
	cout<<a[i]<<" ";
}
}}
int main(){
	srand(time(NULL));
	int n;
	cin>>n;
int a[100];
for(int i=0;i<n;i++){
	a[i]=rand()%90+10;
}
for(int i=0;i<n;i++){
cout<<a[i]<<" ";
}
cout<<"\n";
test(a,n); 
		 return 0;
		 }

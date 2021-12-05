#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
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
 int min=a[0];
 for(int i=0;i<n;i++){
 	if(a[i]<min){
	 min=a[i];
	 }}
	cout<<"\n"<<min<<"\n";
	for(int i=0;i<n;i++){
 	if(a[i]==min){
	 cout<<"a["<<i<<"]\n";
	 }}
		 return 0;
		 }

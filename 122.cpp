#include<iostream>
#include<stdlib.h>
using namespace std;
double maxarray(double a[],int n){
double max=a[0];
for(int i=0;i<n;i++){
if(a[i]>max){
max=a[i];
}
}
return max;
}
int main(){
int n;
cin>>n;
double a[1000];
for(int i=0;i<n;i++){
a[i]=rand()%90+10;
}

for(int i=0;i<n;i++){
	cout<<a[i]<<" ";}
	cout<<"\n Max cua mang la: "<<maxarray(a,n);
return 0;
}

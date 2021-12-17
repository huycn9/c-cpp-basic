#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

void bai174(int a[],int n){
cout<<"Cac cap (a,b) voi a<=b la: \n";
for(int i=0;i<n-1;i++){
	for(int j=n-1;j>i;j--){
		if(a[i]<=a[j]){
		cout<<"("<<a[i]<<","<<a[j]<<")\n";
}
}
}
}


int main(){
	srand(time(NULL));
	int a[10001];
	int n;
	cin>>n;
for(int i=0;i<n;i++){
a[i]=rand()%9+1;
}
for(int i=0;i<n;i++){
cout<<a[i]<<" ";
}
cout<<"\n";

bai174(a,n);




return 0;
}

#include<iostream>
using namespace std;
void dem(int n){
	
	
	int k=n;
	int max=n%10;
	int count=0;
	do{
	int t=n%10;
		if(t>max){
			max=t;
		}
		n=n/10;
	}
	while(n>0);
	cout<<"Chu so lon nhat la: "<<max<<endl;
	do{
		int z=k%10;
		if(z==max){
			count++;
		}
		k=k/10;
	}
	while(k>0);
	cout<<"So luong chu so lon nhat la: "<<count;
}
int main(){
	int n;
	cin>>n;
	dem(n);
	return 0;
}

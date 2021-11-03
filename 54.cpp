#include<iostream>
using namespace std;
void dem(int n){
	
	
	int k=n;
	int min=n%10;
	int count=0;
	do{
	int t=n%10;
		if(t<min){
			min=t;
		}
		n=n/10;
	}
	while(n>0);
	cout<<"Chu so nho nhat la: "<<min<<endl;
	do{
		int z=k%10;
		if(z==min){
			count++;
		}
		k=k/10;
	}
	while(k>0);
	cout<<"So luong chu so la: "<<count;
}
int main(){
	int n;
	cin>>n;
	dem(n);
	return 0;
}

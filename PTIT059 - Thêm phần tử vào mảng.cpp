#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int *a;	
    a=new int[n+1];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int x;
	cin>>x;
	int vitri=0;
	for(int i=n-1;i>=0;i--)
	{
	if(x>=a[i]){
	vitri=i+1;
	break;
	}
	}
	for(int i=n;i>vitri;i--)
	{
	a[i]=a[i-1];
	}
	a[vitri]=x;
	for(int i=0;i<=n;i++){
		cout<<a[i]<<" ";
	}
	}

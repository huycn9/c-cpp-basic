#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
//1
for(int i=0;i<n;i++)
{
for(int j=i;j<n+1;j++)
{
	cout<<".";
	}
	cout<<"#";
	if(i>0){
	for(int j=0;j<2*i-1;j++){
		cout<<"x";
	}
	cout<<"#";
	}
	for(int j=i;j<n+1;j++)
{
	cout<<".";
	}
cout<<endl;
}
//2
for(int i=0;i<n+1;i++)
{
for(int j=i;j<n+1;j++)
{
	cout<<".";
	}
	cout<<"#";
	if(i>0){
	for(int j=0;j<2*i-1;j++){
		cout<<"x";
	}
	cout<<"#";
	}
	for(int j=i;j<n+1;j++)
{
	cout<<".";
	}
cout<<endl;
}


//3
for(int i=0;i<n+1;i++)
{
for(int j=i;j<n+1;j++)
{
	cout<<".";
	}
	cout<<"#";
	if(i>0){
	for(int j=0;j<2*i-1;j++){
		cout<<"x";
	}
	cout<<"#";
	}
	for(int j=i;j<n+1;j++)
{
	cout<<".";
	}
cout<<endl;
}

cout<<"#";
for(int i=1;i<2*n+2;i++){
	cout<<"x";}
	cout<<"#";
	}


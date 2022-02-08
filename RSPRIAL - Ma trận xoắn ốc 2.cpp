#include<iostream>
using namespace std;
int main()
{
int m,n;
cin>>m>>n;
int a[m][n];

for(int i=0;i<m;i++)
{
	for(int j=0;j<n;j++)
	{
		cin>>a[i][j];
		
	}
}
/*for(int i=0;i<m;i++)
{
	for(int j=0;j<n;j++)
	{
		cout<<a[i][j]<<" ";
	}
	cout<<endl;
}*/
int hd=0,cd=0,cs=n-1,hs=m-1;
int result=1;
while(result<=m*n){

for(int i=cd;i<=cs;i++)
{
	cout<<a[hd][i]<<" ";
	result++;
}
for(int i=hd+1;i<=hs;i++)
{
	cout<<a[i][cs]<<" ";
	result++;
}
if(hd!=hs)
{
	for(int i=cs-1;i>=cd;i--)
	{
		cout<<a[hs][i]<<" ";
		result++;
	}
}
if(cd!=cs)
{
	for(int i=hs-1;i>hd;i--)
	{
		cout<<a[i][cd]<<" ";
		result++;
	}
}
hd++;
cd++;
hs--;
cs--;
}

}


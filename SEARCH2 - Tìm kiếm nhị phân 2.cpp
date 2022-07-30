#include<iostream>
#include<cstring>
#include<cmath>
#include<map>
#include<vector>
#include<set>
#include<stack>
#include<queue>
#include <algorithm>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

void input(int a[],int n)
{
for(int i=0;i<n;i++) cin>>a[i];
}
int binary(int a[],int x,int l,int r)
{
int mid=(l+r)/2;
if(l<=r)
{
if(a[mid]==x) return mid;
else if(a[mid]<x) return binary(a,x,mid+1,r);
else return binary(a,x,l,mid-1);
}
return -1;
}
main()
{
int n,m;
cin>>n>>m;
int a[n],b[m];
input(a,n);
input(b,m);
for(int i=0;i<m;i++){
int vt=binary(a,b[i],0,n);
if(vt<0) cout<<0<<" ";
else{
  while(a[vt-1]==a[vt]&&vt>0) vt--;
 cout<<vt+1<<" ";
}
}
}

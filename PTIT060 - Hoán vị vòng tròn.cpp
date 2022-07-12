#include<bits/stdc++.h>
#define cin(n) cin>>n;
using namespace std;
main()
{
int n,k,t,i;
cin(n) cin(k)
t=k%n;
int a[n];
for(int i=0;i<n;i++) cin(a[i])
cout<<a[t]<<" ";
i=t+1;
if(i==n) i=0;
while(i!=t){
cout<<a[i++]<<" ";
if(i==n) i=0;
}
}

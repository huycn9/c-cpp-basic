#include<bits/stdc++.h>
using namespace std;
int main()
{	
int n;
cin>>n;
int a[31];
a[1]=a[2]=1;
for(int i=3;i<31;i++){
a[i]=a[i-1]+a[i-2];
}
for(int i=1;i<=n;i++){
cout<<a[i]<<" ";
}
}


#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstring>
#include<map>
#include<vector>
#define ll long long
#define N 1001
#define sub(n) cout<<"Xau nhi phan co do dai "<<n<<" la:\n";
using namespace std;
int n,ok;
int a[N];
void khoitao()
{
for(int i=1;i<=n;i++) a[i]=0;
}
void in(int a[],int n)
{
for(int i=1;i<=n;i++) cout<<a[i];
puts("");
}
void sinh(int a[],int n)
{
int i=n;
//0000
//0001
//0010
//0011
while(i>0&&a[i]==1)
{
a[i]=0;
i--;
}
if(i<1) ok=0;
a[i]=1;

}
main()
{
int t,n;
cin>>t;
while(t--)
{
ok=1;
cin>>n;
sub(n)
khoitao();
while(ok){
in(a,n);
sinh(a,n);
}
}
}

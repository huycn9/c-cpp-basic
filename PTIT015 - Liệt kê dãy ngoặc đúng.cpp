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
#define N 1001
using namespace std;
int s[N];
int n,cnt=0;
void in()
{
int x=0;
for(int i=1;i<=n;i++)
{

if(!s[i]&&x>=0) x++;
else if(s[i]&&x>0) x--;
else x--;
}
if(x==0){
for(int i=1;i<=n;i++)
{
cout<<(s[i]?')':'(');
}
puts("");
++cnt;
}
}

void Try(int i){
for(int j=0;j<=1;j++)
{
s[i]=j;
if(i==n) in();
else Try(i+1);
}
}
main()
{
cin>>n;
Try(1);
cout<<cnt;
}


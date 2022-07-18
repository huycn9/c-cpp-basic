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
#define cin(n) cin>>n;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define N 1001
using namespace std;
int cot[N],a[N][N],cheochinh[N],cheophu[N],x[N],n,cnt=0;
void init()
{
memset(a,0,sizeof(a));
for(int i=0;i<N;i++) {
cot[i]=cheochinh[i]=cheophu[i]=1;
}
}
void in()
{
cout<<"Cach "<<++cnt<<":\n";
memset(a,0,sizeof(a));
for(int i=1;i<=n;i++)
a[i][x[i]]=1;
for(int i=1;i<=n;i++){
for(int j=1;j<=n;j++){
if(a[i][j]) cout<<"[Q]";
else cout<<"[ ]";
}
puts("");
}
puts("");
}


void Try(int i)
{
for(int j=1;j<=n;j++)
if(cot[j]==1&&cheochinh[i-j+n]==1&&cheophu[i+j-1]==1)
{
x[i]=j;
cot[j]=cheochinh[i-j+n]=cheophu[i+j-1]=0;
if(i==n) in(); 
else Try(i+1);
cot[j]=cheochinh[i-j+n]=cheophu[i+j-1]=1;
}
}
main()
{
init();
cin>>n;
Try(1);
cout<<cnt<<endl;
}

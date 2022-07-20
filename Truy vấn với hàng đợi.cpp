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
using namespace std;
main()
{
int t,n,x;
cin(t);
queue<int>q;
while(t--)
{
cin(x);
switch(x){
case 1:
cin>>n;
q.push(n);
break;
case 2:
if(q.size()) q.pop();
break;
case 3:
if(!q.size()) cout<<"Empty!";
else cout<<q.front();
puts("");
break;
}
}
}

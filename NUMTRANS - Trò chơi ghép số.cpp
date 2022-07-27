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
int cmp(string a,string b)
{
string ab=a.append(b);
string ba=b.append(a);
return ab.compare(ba)>0?1:0;
}
main()
{
int n;
cin>>n;
string s;
vector<string> a;
for(int i=0;i<n;i++)
{
cin>>s;
a.push_back(s);
}
sort(a.begin(),a.end(),cmp);
for(int i=0;i<n;i++) cout<<a[i];
}


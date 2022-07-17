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
//q.push()
//q.front()
//q.pop()

using namespace std;
main()
{

int n;
cin(n)
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
// 1 2 3
//queue<int>q;
//for(int i=0;i<n;i++){

//1
//in ra 1
//1 2
//in ra 2 1
// 2 1 3
// in ra 3 1 2
int i=n-1;
if(n%2==0){
while(i>0){
cout<<a[i]<<" ";
i-=2;
}
i=0;
while(i<n){
cout<<a[i]<<" ";
i+=2;
}
}
else{
while(i>=0){
cout<<a[i]<<" ";
i-=2;
}
i=1;
while(i<n){
cout<<a[i]<<" ";
i+=2;
}
}
}

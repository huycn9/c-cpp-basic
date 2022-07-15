#include<iostream>
#include<stack>
using namespace std;
main()
{
stack<int>p;
int t,c,n;
cin>>t;
while(t--)
{
cin>>c;
switch(c)
{
case 1:
cin>>n;
p.push(n); //them n vao ngan xep
break;
case 2:
if(p.size()>0) p.pop(); //xoa phan tu dau ra khoi ngan xep
break;
case 3:
if(p.size()>0) cout<<p.top()<<endl; //in ra phan tu dau tien cua ngan xep
else cout<<"Empty!"<<endl;
break;
}
}
}

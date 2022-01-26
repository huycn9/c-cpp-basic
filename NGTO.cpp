
    #include<bits/stdc++.h>
using namespace std;
bool snt(int n)
{

for(int i=2;i<=sqrt(n);i++)
{
if(n%i==0) return 0;
}
return n>1;
}
int main()
{

int n;
cin>>n;
int count=0;
for(int i=2;i<=(n/2);i++){
if(snt(i)==1&&snt(n-i)==1&&i<n-i){
	count++;
}
}
cout<<count<<endl;
for(int i=2;i<=(n/2);i++){
if(snt(i)==1&&snt(n-i)==1&&i<n-i){
cout<<i<<' '<<n-i<<endl;	
}
}
}

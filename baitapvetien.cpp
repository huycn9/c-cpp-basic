#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int n,x,y,z;
int T;
    cin>>T;
for(int i=0;i<T;i++){
	
cin>>n;

    z=n/8;
x=z*5;
y=2*z;

if(n%8==0&&n!=0){
cout<<x<<' '<<y<<' '<<z<<endl;
}
else{
	cout<<-1<<endl;
}
}
}

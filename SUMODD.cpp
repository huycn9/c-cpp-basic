#include<bits/stdc++.h>
using namespace std;
int main()
{	
long long int l,r;
while(true){
cin>>l>>r;

if(l==r){
cout<<((l%2==0)?0:l);
}
else{
	long long int n=((((r%2!=0)?r:r-1)-((l%2!=0)?l:l+1))/2)+1;
long long int sum=n*((l%2!=0)?l:l+1)+n*(n-1);
cout<<sum<<endl;
}
}
}


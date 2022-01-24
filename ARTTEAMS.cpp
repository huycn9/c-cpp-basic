#include<bits/stdc++.h>
using namespace std;
#define N 100001
int main()
{
	int n;
	cin>>n;
int a[N];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int min=abs(a[0]-a[4]);
	for(int i=n-1;i>0;i--){
		if(abs(a[i]-a[i-4])<min){
		min=abs(a[i]-a[i-4]);
		}
	}
	cout<<min;
}

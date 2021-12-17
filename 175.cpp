#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;
int min175(int a[],int n){
int min=abs(a[n-1]-a[n-2]);
for(int i=0;i<n;i++)
{
for(int j=n-1;j>i;j--){
if(abs(a[j]-a[i])<min){
	min=abs(a[j]-a[i]);
}
}
}
return min;
}
void bai175(int a[],int n)
{
cout<<"\n2 phan tu gan nhau nhat mang la: \n";
for(int i=0;i<n;i++)
{
for(int j=n-1;j>i;j--){
if(abs(a[j]-a[i])==min175(a,n))
{
	cout<<"("<<a[i]<<","<<a[j]<<")\n";
}
}
}
}
		int main()
		{
			srand(time(NULL));
			int a[10001];
			int n;
			cin>>n;
			for(int i=0;i<n;i++)
			{
				a[i]=rand()%100+1;
				}
				for(int i=0;i<n;i++)
			{
				cout<<a[i]<<" ";
				}
				bai175(a,n);
	return 0;
	}

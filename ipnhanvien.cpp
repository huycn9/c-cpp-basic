
    #include<bits/stdc++.h>
using namespace std;
#define N 500001
int main()
{

int n;
cin>>n;
int ip[N];

map<int,int> count;
for(int i=0;i<n;i++)
{
cin>>ip[i];
count[ip[i]]++;
}
for(int i=1;i<N;i++)
{
	if(count[i]==0){
		cout<<i;
		break;
		}
	}
	}

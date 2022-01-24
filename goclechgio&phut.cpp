#include<bits/stdc++.h>
using namespace std;
int main()
{	
int h,m;
cin>>h>>m;
double toadogio=h*30+(m/60.0)*30;
double toadophut=m*6;
double goc=abs(toadogio-toadophut);
goc=(goc<=180)?goc:(360-goc);
cout<<setprecision(1)<<fixed<<goc;
}

#include<iostream>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
int min=(a<b)?(a<c?a:c):(b<c?b:c);
cout<<min<<" "<<(a<c)?a:c;
return 0;
}

#include<iostream>

using namespace std;
void gptb1(int a,int b){
double k=(-b*1.0/a);
if(a==0&&b!=0){
cout<<" PT Vo No";
}
else if(a==0&&b==0){
cout<<" PT Vo So No";
}
else{
	cout<<" PT co 1 no X="<<k;
}
}
int main(){
int x,a,b;
cout<<"\n Giai PTB1: aX+b=0\n";
cin>>a>>b;
gptb1(a,b);
return 0;
}


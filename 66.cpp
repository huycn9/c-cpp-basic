#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
void gptb4(int a,int b,int c){
if(a==0){
if(b==0&&c==0){
cout<<"PT Co Vo So Nghiem";}
else if(b==0&&c!=0){
	cout<<"PT Vo Nghiem";
}
else if(c==0&&b!=0){
	cout<<"PT Co Nghiem Kep X=0";
}
else if(b>0&&c<0||b<0&&c>0){
	cout<<"PT Co 2 Nghiem Phan Biet: \n";
	cout<<"X1="<<setprecision(3)<<fixed<<sqrt(-c*1.0/b) <<endl;
	cout<<"X2="<<setprecision(3)<<fixed<<-sqrt(-c*1.0/b) <<endl;
}
else{
	cout<<"PT Vo Nghiem";
}}

else if(a!=0){
int d=b*b-4*a*c;
if(d<0||d==0&&a*b>0||a*b>0&&a*c>0){
cout<<"PT Vo No";
}
else if(d==0&&a*b<0){
	cout<<"X1="<<sqrt(-b/2.0*a);
	cout<<"X2="<<-sqrt(-b/2.0*a);
}
else if(d>0&&c!=0){
double t1=(-b+sqrt(d))/(2.0*a);
double t2=(-b-sqrt(d))/(2.0*a);
if(t1>=0&&t2>=0){
cout<<"PT co 4 nghiem:\n";
cout<<"X1="<<sqrt(t1*1.0)<<endl;
cout<<"X2="<<-sqrt(t1*1.0)<<endl;
cout<<"X3="<<sqrt(t2*1.0)<<endl;
cout<<"X4="<<-sqrt(t2*1.0)<<endl;
}
else if(t1>=0&&t2<0){
cout<<"PT co 2 nghiem:\n";
cout<<"X1="<<sqrt(t1*1.0)<<endl;
cout<<"X2="<<-sqrt(t1*1.0)<<endl;
}
else if(t1<0&&t2>=0){
cout<<"PT co 2 nghiem:\n";
cout<<"X1="<<sqrt(t2*1.0)<<endl;
cout<<"X2="<<-sqrt(t2*1.0)<<endl;
}
}
else if( d>0&&c==0&&a*b<0){
	cout<<"PT Co X1=X2=0\n";
	cout<<"X3="<<sqrt(-b/a*1.0) <<endl;
	cout<<"X4="<<-sqrt(-b/a*1.0) <<endl;
}

else if(d>0&&c==0&&a*b>0||b==0&&c==0){
cout<<"PT Co X1=X2=0\n";
}}
}
int main(){
int a,b,c;
cin>>a>>b>>c;
cout<<" GIAI PTB4: aX^4+bX^2+c=0 \n";
gptb4(a,b,c);
return 0;
}

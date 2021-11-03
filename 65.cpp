#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
void gptb2(int a,int b,int c){
if(a==0){
double k=(-c*1.0/b);
if(b==0&&c!=0){
cout<<" PT Vo No";
}
else if(b==0&&c==0){
cout<<" PT Vo So No";
}
else{
	cout<<" PT co 1 No X="<<k;
}
}
else if(a!=0){
	double denta=(b*b-4*a*c);
	if(denta<0){
		cout<<" PT Vo No";
	}
	else if(denta==0){
		double nk=(-b/2.0*a);
	cout<<" PT Co No Kep: X="<<setprecision(3)<<fixed<<nk;
	}
else if(denta>0){
	cout<<" PT Co 2 No Phan Biet: \n";
	cout<<" X1="<<setprecision(3)<<fixed<<(-b-sqrt(denta))/(2.0*a);
	cout<<"\n X2="<<setprecision(3)<<fixed<<(-b+sqrt(denta))/(2.0*a);
}	
}}
int main(){
int a,b,c;
cout<<"\n Giai Phuong Trinh Bac 2: aX^2+bX+c=0: \n";
cin>>a>>b>>c;

gptb2(a,b,c);	
	return 0;}
	

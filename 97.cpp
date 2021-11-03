#include<iostream>
#include<math.h>
using namespace std;
void kt(double a,double b,double c){
	double ab=a*a+b*b;
	double bc=b*b+c*c;
	double ac=a*a+c*c;
	if(a+b<=c||b+c<=a||a+c<=b){
	cout<<"Khong hop le";
	}
else if(a==b&&b==c){
cout<<"Tam Giac Deu";
}
else if(a==b&&ab==c*c||b==c&&bc==a*a||c==a&&ac==b*b){
cout<<"Tam Giac Vuong Can";
}
else if(a==b||b==c||c==a){
cout<<"Tam Giac Can";
}
else if(ab==c*c||bc==a*a||ac==b*b){
cout<<"Tam Giac Vuong";
}
else{
	cout<<"Tam Giac Thuong";
}
}
int main(){
	double a,b,c;
cin>>a>>b>>c;
kt(a,b,c);
return 0;
}

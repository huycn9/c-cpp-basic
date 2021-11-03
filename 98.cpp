#include<iostream>
using namespace std;
void hptb1(double a,double b,double c,double  d,double  e,double  f,double x,double y){
 x=(1.0*(c*e-f*b)/(a*e-b*d));
 y=(1.0*(c*d-a*f)/(b*d-a*e));
if((1.0*a/d)==(1.0*b/e)&& (1.0*b/e)==(1.0*c/f)&&d!=0&&e!=0&&f!=0||(1.0*d/a)==(1.0*e/b)&& (1.0*e/b)==(1.0*f/c)&&a!=0&&b!=0&&c!=0 || a==0&&b==0&&c==0|| d==0&&e==0&&f==0||a==b&&b==c&&c==d&&d==e&&e==f ||a==d&&b==e&&c==f||b==0&&e==0&&(1.0*a*f)==(1.0*c*d)||a==0&&d==0&&(b*f*1.0)==(1.0*c*e)){
cout<<"Vo so nghiem";	
}
else if((b*d*1.0)!=(a*e*1.0)){
	cout<<"Phuong trinh co nghiem :\n";
	cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
}	
else{
cout<<"PT vo no";	
}
}
int main(){
	double a,b,c,d,e,f,x,y;
	cout<<"Giai he : \n";
	cout<<"aX+bY=c\n";
	cout<<"dX+eY=f\n";
	
	cout<<"Nhap a:"; cin>>a;
		cout<<"Nhap b:"; cin>>b;
			cout<<"Nhap c:"; cin>>c;
				cout<<"Nhap d:"; cin>>d;
					cout<<"Nhap e:"; cin>>e;
						cout<<"Nhap f:"; cin>>f;
						hptb1(a,b,c,d,e,f,x,y);
	return 0;
}

#include<iostream>
using namespace std;
int main(){
int toan,van;
char name[50];
gets(name);
fflush(stdin);
cin>>toan>>van;
cout<<"Name: "<<name;
cout<<"\nPoint: "<<double((toan+van)/2.0);
return 0;
}

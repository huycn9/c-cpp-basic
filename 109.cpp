#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
int main(){
	
	cout<<"          bbbbb      a     nn   n gggggg     cccccc u    u u   u   ccccc  h    h u    u ooooo n    n gggggg        \n";
	cout<<"          b    b    a a    n n  n g          c      u    u u   u   c      h    h u    u o   o nn   n g             \n";
	cout<<"          bbbbb    aaaaa   n  n n g   ggg    c      u    u u   u   c      hhhhhh u    u o   o n n  n g   ggg       \n";
	cout<<"          b    b  a     a  n   nn g    g     c      u    u u   u   c      h    h u    u o   o n  n n g    g        \n";
	cout<<"          bbbbb  a       a n    n gggggg     cccccc uuuuuu uuuuu   cccccc h    h uuuuuu ooooo n   nn gggggg        \n";
	cout<<"\n\n\n\n\n\n\n\n";
	fstream file("bcc.txt");
	
for(int i=1;i<=9;i++){
	cout<<"                   ";
		for(int j=1;j<=9;j++){
			
		if(i*j>=10){
			cout<<setw(2)<<i<<"*"<<j<<"="<<i*j<<" ";
		}
			else{
			
			cout<<setw(3)<<i<<"*"<<j<<"="<<i*j<<" ";
		}}
		cout<<endl;
	}
	for(int i=1;i<=9;i++){
	file<<"                   ";
		for(int j=1;j<=9;j++){
		if(i*j>=10){
			file<<setw(2)<<i<<"*"<<j<<"="<<i*j<<" ";
		}
			else{
			
			file<<setw(3)<<i<<"*"<<j<<"="<<i*j<<" ";
		}}
		file<<endl;
	}
	file.close();
	return 0;
}

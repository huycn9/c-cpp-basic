#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
int main(){

int i,j,k;
cout<<"|5k |2k |1k |\n";
//i*5+j*2+k*1==200 /i=0;i<=40;i++/j=0;j<=200-5*i;j++/i=0;i<=200-i*5-2*j
for(int i=0;i<=40;i++)    {
for(int j=0;j<=200-5*i;j++){
for(int k=0;k<=200-5*i-2*j;k++){
	if(k+2*j+5*i==200){
	cout<<"|"<<setw(2)<<i<<" |"<<setw(2)<<j<<" |"<<setw(2)<<k<<"|\n";
	}
}

} 
}

return 0;
}

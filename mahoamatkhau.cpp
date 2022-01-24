#include<bits/stdc++.h>
using namespace std;
int integer(char x){
switch(x){
case '0':
	return 0;
	break;
	case '1':
	return 1;
	break;
	case '2':
	return 2;
	break;
	case '3':
	return 3;
	break;
	case '4':
	return 4;
	break;
	case '5':
	return 5;
	break;
	case '6':
	return 6;
	break;
	case '7':
	return 7;
	break;
	case '8':
	return 8;
	break;
	case '9':
	return 9;
	break;
	
}
}
int main()
{	
string s;
getline(cin,s);
fflush(stdin);
int sum=0;
for(int i=0;i<s.length();i++){
if(s[i]>='0'&&s[i]<='9'){
	sum+=integer(s[i]);
}
else{
	cout<<s[i];
}
}
cout<<sum;
}

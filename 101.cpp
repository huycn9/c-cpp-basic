#include<iostream>
#include <unistd.h>
using namespace std;
void test(int thang,int nam){
switch (thang){
case 1:
	case 3:
		case 5:
			case 7:
				case 8:
					case 10:
						case 12:
							cout<<31<<" days";
							break;
							case 4:
								case 6:
case 9:
	case 11:
		cout<<30<<" days";
		break;
		case 2:
			if(nam%4==0&&nam%100!=0){
			cout<<29<<"days";
			}
			else{
				cout<<28<<"days";
			}
			break;
			}
}

int main(){
int thang,nam;

do{
	cout<<"Month: ";
cin>>thang;
if(thang<1||thang>12){
	
cout<<"Error!\nNhap lai: ";
sleep(1);
system("cls");
}
}
while(thang<1||thang>12);
cout<<"Years: ";
cin>>nam;
test(thang,nam);
return 0;
}

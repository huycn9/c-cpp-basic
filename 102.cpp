#include<iostream>

using namespace std;
int ngay(int thang,int nam){
switch (thang){
case 1:
	case 3:
		case 5:
			case 7:
				case 8:
					case 10:
						case 12:
							return  31;
							break;
							case 4:
								case 6:
case 9:
	case 11:
		return 30;
		break;
		case 2:
			if(nam%4==0&&nam%100!=0){
			return 29;
			}
			else{
				return 28;
			}
			break;
			}
}
void nextday(int day,int thang,int nam){
if(day<ngay(thang,nam)){
day++;
}
if(day==ngay(thang,nam)&&thang<12){
	day=1;
	thang++;
}
else if(day==ngay(thang,nam)&&thang==12){
day=1;
thang=1;
nam++;
}
cout<<day<<"/"<<thang<<"/"<<nam;
}
int main(){
	int day,thang,nam;
	do{cout<<"Day: ";
	cin>>day;
	cout<<"Month: ";
	cin>>thang;
	cout<<"Years: ";
	cin>>nam;
	if(day>ngay(thang,nam)||day<=0||thang>12||thang<0){
		system("cls");
		cout<<"Khong hop le!\nNhap lai:\n";
	}}
	while(day>ngay(thang,nam)||day<=0||thang>12||thang<0);
	cout<<"\nBan vua chon: "<<day<<"/"<<thang<<"/"<<nam<<"\n";
	cout<<"Ngay Ke Tiep La: ";
	nextday(day,thang,nam);
	return 0;}
	
	

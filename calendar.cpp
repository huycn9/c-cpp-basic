#include<iostream>
#include<iomanip>
using namespace std;
int dayofyear(int nam)
{
if(nam%400==0)
			{
			return 366;
			}
			else if(nam%4==0&&nam%100!=0){
				return 366;
			}
			else{
				return 365;
			}
		
			}

int dayofmonth(int thang,int nam){
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
			if(nam%400==0)
			{
			return 29;
			}
			else if(nam%4==0&&nam%100!=0){
				return 29;
			}
			else{
				return 28;
			}
			break;
			}
}
int ngaybatdaunam(int nam)
		{
		if(nam==1600) return 7;
		int start=0;
		for(int i=1600;i<nam;i++){
			start+=dayofyear(i);
		}
	 
	 int result= start%7;
	 return (result==0?7:result);
		}
//
//////////////////
		int ngaybatdauthang(int thang,int nam)
		{
		if(thang==1) return ngaybatdaunam(nam);
		int s=ngaybatdaunam(nam);
		for(int j=1;j<thang;j++)
		{
			s+=dayofmonth(thang,nam);
		}
		return ((s%7)==0?7:(s%7));
		}
		///////////
		
void lichthang(int day,int thang,int nam)
{
	cout<<"\n____________________________\n";
	cout<<"\nThang "<<thang<<":\n";
	cout<<"\nCN T2 T3 T4 T5 T6 T7\n";
	int j=ngaybatdauthang(thang,nam);
	while(j<=7)
	{
	if(day==1)
	{
		for(int i=1;i<ngaybatdauthang(thang,nam);i++)		
		cout<<"   ";
		
	}
	cout<<setw(2)<<day<<" ";
	day++;
	j++;
	if(j==8){
		cout<<endl;
		j=1;
	}
	if(day>dayofmonth(thang,nam))
	{
		break;
		}
		}
		}
		///////////
		
		
		
		
int main()
{
int nam;
	int c=1;
	while(c==1)
	{
	do
	{
		cout<<"\nNhap vao nam: ";
	cin>>nam;
	if(nam<1600){
	system("cls");
		cout<<"Cach tinh lich co su thay doi tu 1582\nHay chon nam tu the ky XVII tro len: ";
	
	}
	}
	while(nam<1600);
	system("cls");
	cout<<"Lich nam "<<nam<<": ";
	system("color 3A");
for(int thang=1;thang<=12;thang++)
		{
            
			lichthang(1,thang,nam);
		}
	cout<<"\nBan muon tiep tuc khong: \n1-co\nkhac-khong\n";
	cin>>c;
	switch(c){
		case 1:
			system("cls");
			break;
			default:
				exit(1);
			break;}	
}
	return 0;
	}

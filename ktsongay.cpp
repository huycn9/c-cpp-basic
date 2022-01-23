/*
Th? th�ch l?n n�y c?a b?n l� x�c d?nh s? ng�y c?a m?t th�ng (theo duong l?ch). B?n s? du?c cung c?p 2 gi� tr? nguy�n duong l� th�ng (monthmonth) v� nam (yearyear) c?n ki?m tra.

Th?i gian du?c cho l� h?p l? n?u:

1 \le month \le 121=month=12
0 < year \le 1000000<year=100000

D? li?u v�o
L?n lu?t l� 2 gi� tr? nguy�n duong monthmonth v� yearyear

Gi?i h?n:

0 < month \le 1000<month=100
0 < year \le 1000000<year=100000
*/
int ngaycuathang(int month,int year)
{
switch (month){
case 1:
	case 3:
		case 5:
			case 7:
				case 8:
					case 10:
						case 12:
							return 31;
							break;
							//thang 1,3,5,7,8,10,12 co 31 ngay;
							
case 4:
case 6:
case 9:
case 11:
return 30;
break;
//thang 4,6,9,11 co 30 ngay
case 2:
	//nam nhuan co 29
	//nam nhuan la nhung nam chia het cho 400 vd:2000,1600,...
	//neu khong chia het cho 400 thi phai chia het cho 4 va khong chia het cho 100 vd:2020,2016,2012,...
	//2100,2200 khong phai nam  nhuan
	if(year%400==0) return 29;
	if(year%4==0&&year%100!=0) return 29;
	return 28;
	break;
}
}
#include<stdio.h>
int main(){
//c t khong code dc dau,c++ thi choi???
//c thi c
int month,year;
//nham
scanf("%d %d",&month,&year);
if(month<0||month>12||year<=0||year>100000){
printf("INVALID");
}
else{
	printf("%d",ngaycuathang(month,year));
}
}













/*Ð? bài
Cho m?t thanh s?t có chi?u dài là m?t s? nguyên duong LL (LL là s? ch?n). Hãy u?n thanh s?t LL thành m?t hình ch? nh?t c?nh có d? dài là s? nguyên, chu vi b?ng LL và có di?n tích l?n nh?t.


D? li?u vào
G?m m?t s? nguyên duy nh?t LL.
Gi?i h?n:

70\%70% s? di?m c?a bài có 2=L=10^52=L=10 
5
 ;
30\%30% s? di?m còn l?i c?a bài có 10^5<L=10^910 
5
 <L=10 
9
 .

D? li?u ra
Ghi ra m?t s? nguyên duy nh?t là di?n tích l?n nh?t c?a hình ch? nh?t u?n du?c.

Ví d?
Input #1 

18
Output #1 

20*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int L;
cin>>L;
long long int S;
long long int nuachuvi=L/2;
long long int rong=L/4;
long long int dai = nuachuvi-rong;
S=(long long int)(dai*rong);
cout<<S;
}

/*�? b�i
Cho m?t thanh s?t c� chi?u d�i l� m?t s? nguy�n duong LL (LL l� s? ch?n). H�y u?n thanh s?t LL th�nh m?t h�nh ch? nh?t c?nh c� d? d�i l� s? nguy�n, chu vi b?ng LL v� c� di?n t�ch l?n nh?t.


D? li?u v�o
G?m m?t s? nguy�n duy nh?t LL.
Gi?i h?n:

70\%70% s? di?m c?a b�i c� 2=L=10^52=L=10 
5
 ;
30\%30% s? di?m c�n l?i c?a b�i c� 10^5<L=10^910 
5
 <L=10 
9
 .

D? li?u ra
Ghi ra m?t s? nguy�n duy nh?t l� di?n t�ch l?n nh?t c?a h�nh ch? nh?t u?n du?c.

V� d?
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

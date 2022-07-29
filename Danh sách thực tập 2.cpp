#include<iostream>
#include<cstring>
#include<cmath>
#include<map>
#include<vector>
#include<set>
#include<stack>
#include<queue>
#include <algorithm>
#define ll long long
#define cin(n) cin>>n;
using namespace std;
struct sinhvien{
int so;
string id,name,lop,email,dn;
};
void input(sinhvien sv[],int n)
{
for(int i=0;i<n;i++){
sv[i].so=i+1;
cin(sv[i].id);
fflush(stdin);
getline(cin,sv[i].name);
fflush(stdin);
cin(sv[i].lop)
cin(sv[i].email)
cin(sv[i].dn)
}
}
bool cmp(sinhvien &x,sinhvien &y)
{
return x.name<y.name;
}
void solve(sinhvien sv[],int n,string str)
{
for(int i=0;i<n;i++)
if(sv[i].dn==str) 
cout<<sv[i].so<<" "<<sv[i].id<<" "<<sv[i].name<<" "<<sv[i].lop<<" "<<sv[i].email<<" "<<sv[i].dn<<"\n";
}
main()
{
int n,q;
string str;
cin(n)
sinhvien sv[n];
input(sv,n);
sort(sv,sv+n,cmp);
cin(q)
while(q--)
{
cin(str)
solve(sv,n,str);
}
}
/*
6
B17DCCN016
Le Khac Tuan Anh
D17HTTT2
test1@stu.ptit.edu.vn
VIETTEL
B17DCCN107
Dao Thanh Dat
D17CNPM5
test2@stu.ptit.edu.vn
FPT
B17DCAT092
Cao Danh Huy
D17CQAT04-B
test3@stu.ptit.edu.vn
FPT
B17DCCN388
Cao Sy Hai Long
D17CNPM2
test4@stu.ptit.edu.vn
VNPT
B17DCCN461
Dinh Quang Nghia
D17CNPM2
test5@stu.ptit.edu.vn
FPT
B17DCCN554
Bui Xuan Thai
D17CNPM1
test6@stu.ptit.edu.vn
GAMELOFT
1
FPT
*/

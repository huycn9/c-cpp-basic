#include<bits/stdc++.h>
#define ll long long
#define cin(n) cin>>n;
#define cout(n) cout<<n<<" ";
#define N 10001
using namespace std;
string fi[N];

string sum(string s1,string s2){
string s="";
while(s1.size()<s2.size()) s1.insert(0,"0");
while(s1.size()>s2.size()) s2.insert(0,"0");
reverse(s1.begin(),s1.end());
reverse(s2.begin(),s2.end());
int n=s1.size(),tmp=0,i;
//99
//08
//99
//80
//99
//08
//
for(i=0;i<n-1;i++){
int x=(s1[i]-'0'+s2[i]-'0'+tmp)%10;
char c=x+'0';
s+=c;
tmp=((s1[i]-'0'+s2[i]-'0'+tmp)>9)?1:0;
}
int x=(s1[i]-'0'+s2[i]-'0'+tmp);
char c=x%10+'0';
s+=c;
if(x>9) s+="1";
reverse(s.begin(),s.end());
return s;
}
int sosanh(string s1,string s2){
int n1=s1.size(),n2=s2.size();
if(n1!=n2) return n1>n2?1:-1;
for(int i=0;i<n1;i++)
if(s1[i]!=s2[i])
return (s1[i]>s2[i])?1:-1;
return 0;
}
main()
{
int t,n;
//cin(t)
fi[0]=fi[1]="1";
for(int i=2;i<N;i++) fi[i]=sum(fi[i-1],fi[i-2]);
//while(t--){
int x,y;
string a,b;
cin>>a>>b;
for(int i=0;i<N;i++) if(sosanh(a,fi[i])!=1) { x=i;  break; }
for(int i=N-1;i>=0;i--) if(sosanh(b,fi[i])!=-1) { y=i; break; }
cout<<y-x+1<<endl;
}
//}

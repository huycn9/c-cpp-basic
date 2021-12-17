#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;
//B�i 216: �?m s? lu?ng s? ch?n trong m?ng
void bai216(int a[],int n)
{
	int count216=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			count216++;
		}
	}
	cout<<"\nSo phan tu chan cua mang la: "<<count216<<"\n";
}
//B�i 217: �?m s? duong chia h?t cho 7 trong m?ng
void bai217(int a[],int n)
{
	int count217=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%7==0)
		{
			count217+=1;
		}
	}
	cout<<"\nSo phan tu chia het 7 cua mang la: "<<count217<<"\n";
}
//B�i 218: �?m s? d?i x?ng trong m?ng
bool sdx(int n)
			{
				int t=n;
		int k=0;
		do{
			k*=10;
			k=k+(n%10);
			n=n/10;
		}
		while(n>0);
		if(k==t) return true;
		return false;
		}
		void bai218(int a[],int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(sdx(a[i])==1)
		{
			count++;
		}
	}
	cout<<"\nSo phan tu la so doi xung cua mang la: "<<count<<"\n";
}

//B�i 219: �?m s? l?n xu?t hi?n c?a gi� tr? x trong m?ng
void bai219(int a[],int n,int x)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			count++;
		}
	}
	cout<<"\nSo phan tu = "<<x<<" cua mang la: "<<count<<"\n";
}
//B�i 220: �?m s? lu?ng gi� tr? t?n c�ng b?ng 5 trong m?ng
void bai220(int a[],int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%10==5)
		{
			count++;
		}
	}
	cout<<"\nSo phan tu tan cung = 5 cua mang la: "<<count<<"\n";
}
/*B�i 221: Cho bi?t s? tuong quan gi?a s? lu?ng ch?n v� l? trong m?ng
H�m tr? v? 1 trong 3 gi� tr? -1, 0, 1
Gi� tr? -1 l� ch?n nhi?u hon l?
Gi� tr? 0 l� ch?n b?ng l?
Gi� tr? 1 l� ch?n �t hon l?*/
int bai221(int a[],int n)
{
	int chan,le=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0){
			chan++;
		}
		else{
			le++;
		}
}
if(chan>le) return -1;
if(chan<le) return 1;
return 0;
}
//B�i 222: �?m ph?n t? l?n hon hay nh? hon ph?n t? xung quanh m?ng
void bai222(int a[],int n)
{
	int dem=0;
	if(a[0]!=a[1])
	{
		dem++;
	}
	for(int i=1;i<n-1;i++)
	{
		if(a[i]>a[i+1]&&a[i]>a[i-1]||a[i]<a[i+1]&&a[i]<a[i-1])
		{
			dem++;
		}
	}
	if(a[n-1]!=a[n-2])
	{
		dem++;
	}
	cout<<"\nSo phan tu cuc tri la: "<<dem<<endl;
}
//B�i 223: �?m s? nguy�n t? trong m?ng
bool snt(int n)
			{
				if(n<2) return false;
				for(int i=2;i<=sqrt(n);i++)
				if(n%i==0)return false;
				return true;
						}
						void bai223(int a[],int n)
						{
							int dem=0;
							for(int i=0;i<n;i++)
	{
		if(snt(a[i])==1)
		{
			dem++;
		}
						}
						cout<<"\nSo cac so nguyen to la: "<<dem<<"\n";
					}
//B�i 224: �?m s? ho�n thi?n trong m?ng
bool sht(int n)
{
	int sum;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
	}
	if(sum==n) return true;
	return false;
}
void bai224(int a[],int n)
						{
							int dem=0;
							for(int i=0;i<n;i++)
	{
		if(sht(a[i])==1)
		{
			dem++;
		}
						}
						cout<<"\nSo cac so hoan thien la: "<<dem<<"\n";
					}
//B�i 225: �?m s? lu?ng gi� tr? l?n nh?t c� trong m?ng
void bai225(int a[],int n)
						{
							int count;
						int max=a[0];
						for(int i=0;i<n;i++)
						{
							if(a[i]>max)
							{
								max=a[i];
							}
						}
						for(int i=0;i<n;i++)
						{
							if(a[i]==max)
							{
								count++;
							}
						}
						cout<<"\nSo phan tu = max la "<<count<<"\n";
						}
						//B�i 226: H�y x�c d?nh s? lu?ng ph?n t? k? nhau m� c? 2 d?u ch?n
void bai226(int a[],int n)
						{
							int count;
						for(int i=0;i<n-1;i++)
						{
						if(a[i]%2==0&&a[i+1]%2==0)
						{
							count++;
						}
						}
						cout<<"\nSo cap phan tu ke nhau cung chan la: "<<count<<"\n";
					}
//B�i 227: H�y x�c d?nh s? lu?ng ph?n t? k? nhau m� c? 2 tr�i d?u
void bai227(int a[],int n)
						{
							int count;
						for(int i=0;i<n-1;i++)
						{
						if(a[i]*a[i+1]<0)
						{
							count++;
						}
						}
						cout<<"\nSo cap phan tu trai dau la: "<<count<<"\n";
                         } 
//B�i 228: H�y x�c d?nh s? lu?ng ph?n t? k? nhau m� s? d?ng sau c�ng d?u s? d?ng tru?c
void bai228(int a[],int n)
						{
							int count;
						for(int i=0;i<n-1;i++)
						{
						if(a[i]*a[i+1]>0)
						{
							count++;
						}
						}
						cout<<"\nSo cap phan tu cung dau la: "<<count<<"\n";
                         } 
//v� c� gi� tr? tuy?t d?i l?n hon

//B�i 229: �?m s? lu?ng c�c gi� tr? ph�n bi?t c� trong m?ng
void bai229(int a[],int n)
	{
		int dem;
		int b[10001];
		for(int i=0;i<n;i++)
		{
		b[i]=1;					
    }
    for(int i=0;i<n;i++)
    {
    	for(int j=n-1;j>i;j--)
    	{
    		if(a[i]==a[j])
    		{
    			b[i]=0;
    			b[j]=0;
    			}
    			}
    			}
    			for(int i=0;i<n;i++)
    			{
    				if(b[i]==1)
    				{
    					dem++;
					}
    				}
    				cout<<"\nSo phan tu phan biet la: "<<dem<<"\n";
    				}
//B�i 230: Li?t k� t?n su?t xu?t hi?n c�c gi� tr? trong m?ng (m?i gi� tr? li?t k� 1 l?n)

//B�i 231: H�y li?t k� c�c gi� tr? xu?t hi?n trong m?ng 1 chi?u c�c s? nguy�n d�ng 1 l?n
void bai231(int a[],int n)
	{
		int dem;
		int b[10001];
		for(int i=0;i<n;i++)
		{
		b[i]=1;					
    }
    for(int i=0;i<n;i++)
    {
    	for(int j=n-1;j>i;j--)
    	{
    		if(a[i]==a[j])
    		{
    			b[i]=0;
    			b[j]=0;
    			}
    			}
    			}
    			cout<<"\nCac phan tu xuat hien 1 lan la: \n";
    			for(int i=0;i<n;i++)
    			{
    				if(b[i]==1)
    				{
    					cout<<a[i]<<" ";
    				}
    			}
    			cout<<"\n";
    		}
//B�i 232: H�y li?t k� c�c gi� tr? xu?t hi?n trong d�y qu� 1 l?n. Luu �: m?i gi� tr? li?t k� 1 l?n

int main()
{
	srand(time(NULL));
	int a[10001];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	bai216(a,n);
	bai217(a,n);
	bai218(a,n);
	bai219(a,n,8);	
	bai220(a,n);	
	bai222(a,n);	
	bai223(a,n);	
	bai224(a,n);	
	bai225(a,n);	
	bai226(a,n);	
	bai227(a,n);	
	bai228(a,n);	
	//cout<<"\nTuong quan chan le bai 221: "<<bai221(a,n)<<"\n";
	//bai229(a,n);
	//bai231(a,n);
	return 0;
}

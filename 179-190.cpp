#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;
/*
B�i 179: H�y li?t k� c�c gi� tr? trong m?ng m� th?a di?u ki?n l?n hon gi� tr? tuy?t d?i c?a gi� tr? d?ng li?n sau n�
*/
void bai179(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
	if(a[i]>abs(a[i+1]))
	{
		cout<<a[i]<<">|"<<a[i+1]<<"|\n";
	}
	}
	cout<<"\n";
	}
	/*B�i 180: H�y li?t k� c�c gi� tr? trong m?ng m� th?a di?u ki?n
	 nh? hon tr? tuy?t d?i c?a gi� tr? d?ng li?n sau n� v� l?n hon tr? tuy?t d?i c?a gi� tr? d?ng li?n tru?c n�*/
	void bai180(int a[],int n)
{
	for(int i=1;i<n-1;i++)
	{
	if(a[i]<abs(a[i+1])&&abs(a[i-1])<a[i])
	{
		cout<<"|"<<a[i-1]<<"|<"<<a[i]<<"<|"<<a[i+1]<<"|\n";
	}
	}
	cout<<"\n";
	} 
	/*B�i 181: Cho m?ng 1 chi?u c�c s? nguy�n.
	 H�y vi?t h�m li?t k� c�c gi� tr? ch?n c� �t nh?t 1 l�n c?n cung l� gi� tr? ch?n*/
	 void bai181(int a[],int n)
{
	if(a[0]%2==0&&a[1]%2==0){
		cout<<a[0]<<" ";
		}
for(int i=1;i<n-1;i++)
{
	if(a[i]%2==0&&(a[i-1]%2==0||a[i+1]%2==0))	
	{
	cout<<a[i]<<" ";
	}
	}
	}
	/*B�i 182: Cho m?ng 1 chi?u c�c s? th?c. 
	H�y vi?t h�m li?t k� t?t c? c�c gi� tr? trong m?ng c� �t nh?t 1 l?n c?n tr�i d?u v?i n�*/
	void bai182(int a[],int n)
	{
		if(a[0]*a[1]<0){ cout<<a[0]<<" ";}
		for(int i=1;i<=n-1;i++)
{
if(a[i]*a[i-1]<0||a[i]*a[i+1]<0)
{	
	cout<<a[i]<<" ";
	}
	}
	}
	/*B�i 183: H�y li?t k� c�c v? tr� m� gi� tr? t?i d� l� gi� tr? t?i d� l� gi� tr? l?n nh?t trong m?ng 1 chi?u c�c s? th?c*/
	void bai183(int a[],int n)
	{
		int max=a[0];
		for(int i=0;i<n;i++)
{
	if(a[i]>max){
		max=a[i];
		}
		}
		for(int i=0;i<n;i++)
		{
			if(a[i]==max)
			{
				cout<<"a["<<i<<"] ";
			}
			}
			}
			
			/*
			B�i 184: H�y li?t k� c�c v? tr� m� gi� tr? t?i d� l� s? nguy�n t? trong m?ng 1 chi?u c�c s? nguy�n
			*/
			bool snt(int n)
			{
				if(n<2) return false;
				for(int i=2;i<=sqrt(n);i++)
				if(n%i==0)return false;
				return true;
						}
				void bai184(int a[],int n)
				{		
				for(int i=0;i<n;i++)
		        {
			if(snt(a[i])==1)
			{
				cout<<"a["<<i<<"] ";
			}	
			}
			}
			/*
			B�i 185: H�y li?t k� c�c v? tr� m� gi� tr? t?i d� l� s? ch�nh phuong trong m?ng 1 chi?u c�c s? nguy�n
			*/		
		int	scp(int n)
			{
				if(n<0) return false;
				if(n==0||n==1) return true;
				for(int i=1;i<=sqrt(n);i++){
					if(n%i==0&&i*i==n) return true;
					}
					return false;
					}
					void bai185(int a[],int n)
				{		
				for(int i=0;i<n;i++)
		        {
			if(scp(a[i])==1)
			{
				cout<<"a["<<i<<"] = "<<a[i]<<"\n";
			}	
			}
			}
			/*
			B�i 186: H�y li?t k� c�c v? tr� trong m?ng 1 chi?u c�c s? th?c m� gi� tr? t?i d� b?ng gi� tr? �m d?u ti�n trong m?ng
			
			*/
			
			void bai186(int a[],int n)
			{
				int first;
			for(int i=0;i<n;i++)
			{
				if(a[i]<0){
					first=a[i];
					break;
			}
			}
			for(int i=0;i<n;i++)
			{
				if(a[i]==first)
				{
					cout<<"a["<<i<<"]="<<first<<"\n";
				}
				}
				}
				/*
				B�i 187: H�y li?t k� c�c v? tr� m� gi� tr? t?i c�c v? tr� d� b?ng gi� tr? duong nh? nh?t trong m?ng 1 chi?u c�c s? th?c
				*/
				void bai187(int a[],int n)
				{
					int min;
					for(int i=0;i<n;i++)
					{
						if(a[i]>0)
						{
							min=a[i];
							break;
					}
					}
					for(int i=0;i<n;i++)
					{
						if(a[i]<min&&a[i]>0){
							min=a[i];}
							}
						for(int i=0;i<n;i++)
					{
					if(a[i]==min)
					{
					cout<<"a["<<i<<"]="<<min<<"\n";
					}
					}
					}	
				/*B�i 188: H�y li?t k� c�c v? tr� ch?n l?n nh?t trong m?ng 1 chi?u c�c s? nguy�n*/
				void bai188(int a[],int n)
				{
					int max=a[0];
					for(int i=0;i<n;i+=2)
					{
					if(a[i]>max)
					{
						max=a[i];
					}
					}
					for(int i=0;i<n;i+=2)
					{
					if(a[i]==max)
					{
					cout<<"a["<<i<<"]="<<max<<"\n";
					}
					}
					}
				/*B�i 189: H�y li?t k� c�c gi� tr? trong m?ng 1 chi?u c�c s? nguy�n c� ch? s? d?u ti�n l� ch? s? l?*/
				int first(int n)
				{
					n=abs(n);
					if(n<10)
					{
					return n;
					}
					while(n>=10)
					{
						n=n/10;
					}
					return n;
					}
					void bai189(int a[],int n)
					{
						for(int i=0;i<n;i++)
					{
						if(first(a[i])%2!=0)
						{
							cout<<a[i]<<" ";
						}
						}
						}
				/*B�i 190: H�y li?t k� c�c gi� tr? c� to�n ch? s? l? trong m?ng 1 chi?u c�c s? nguy�n*/
				bool odd(int n)
				{
					n=abs(n);
						while(n>=10){
						if((n%10)%2==0)return false;
						n=n/10;
						}
							if(n<10&&n%2!=0) return true;
					if(n<10&&n%2==0) return false;
					}
					void bai190(int a[],int n)
					{
						for(int i=0;i<n;i++)
					{
						if(odd(a[i])==1)
						{
							cout<<a[i]<<" ";
						}
						}
						}
				/*B�i 191: H�y li?t k� c�c gi� tr? c?c d?i trong m?ng 1 chi?u c�c s? th?c. */
				void bai191(int a[],int n)
					{
						if(a[0]>a[1]){
							cout<<a[0]<<" ";
						}
						for(int i=1;i<n-1;i++)
					{
						if(a[i]>a[i-1]&&a[i]>a[i+1]){
							cout<<a[i]<<" ";
						}
					}
					if(a[n-1]>a[n-2]){
						cout<<a[n-1]<<"\n";
					}
				}
				/*M?t ph?n t? du?c g?i l� c?c d?i khi l?n hon c�c ph?n t? l�n c?n*/
				/*B�i 192: H�y li?t k� c�c  gi� tr? trong m?ng 1 chi?u c�c s? nguy�n c� ch? s? d?u ti�n l� s? ch?n*/
				void bai192(int a[],int n)
					{
						for(int i=0;i<n;i++)
					{
						if(first(a[i])%2==0)
						{
							cout<<a[i]<<" ";
						}
						}
						}
				/*B�i 193: Cho m?ng 1 chi?u c�c s? nguy�n. 
				H�y vi?t h�m li?t k� c�c gi� tr? trong m?ng c� d?ng 3^k.
				
				 N?u m?ng kh�ng c� gi� tr? d� th� tr? v? 0*/
				 bool mu3(int n)
				 {
				 	if(n==1||n==3) return true;
				 	if(n<3) return false;
				 	while(n>3&&n%3==0){
				 		n=n/3;
					 }
					 if(n==3) return true;
					 return false;
				 }
				 void bai193(int a[],int n)
					{
						int dem;
						for(int i=0;i<n;i++)
					{
						if(mu3(a[i])==1){
							cout<<a[i]<<" ";
							dem++;
						}
					}
					if(dem==0)
					{
						cout<<0<<"\n";
					}
				}
					
				/*B�i 194: Cho m?ng 1 chi?u c�c s? nguy�n c� nhi?u hon 2 gi� tr?. 
				H�y vi?t h�m li?t k� c�c c?p gi� tr? g?n nhau nh?t*/
				void bai194(int a[],int n)
				{
					int min=abs(a[1]-a[0]);
						for(int i=0;i<n;i++)
						{
							for(int j=n-1;j>i;j--)
							{
								if(abs(a[j]-a[i])<min)
								{
									min=abs(a[j]-a[i]);
								}
							}
						}
						for(int i=0;i<n;i++)
						{
							for(int j=n-1;j>i;j--)
							{
								if(abs(a[j]-a[i])==min)
								{
									cout<<"("<<a[i]<<","<<a[j]<<")\n";
								}
							}
						}
					}
					
				/*B�i 196: Li?t k� c�c s? �m trong m?ng 1 chi?u c�c s? nguy�n*/
				void bai196(int a[],int n)
				{
						for(int i=0;i<n;i++)
					{
						if(a[i]<0)
						{
							cout<<a[i]<<" ";
				}
			}
			}
				/*B�i 197: H�y li?t k� c�c gi� tr? trong m?ng c�c s? nguy�n c� ch? s? d?u ti�n l� ch? s? l?*/
				void bai197(int a[],int n)
					{
						for(int i=0;i<n;i++)
					{
						if(first(a[i])%2!=0)
						{
							cout<<a[i]<<" ";
						}
						}
						}
				/*B�i 198: H�y li?t k� c�c v? tr� m� gi� tr? t?i d� l� gi� tr? l?n nh?t trong m?ng 1 chi?u c�c s? th?c*/
					void bai198(int a[],int n)
				{
					int max=a[0];
					for(int i=0;i<n;i+=2)
					{
					if(a[i]>max)
					{
						max=a[i];
					}
					}
					for(int i=0;i<n;i+=2)
					{
					if(a[i]==max)
					{
					cout<<"a["<<i<<"]="<<max<<"\n";
					}
					}
					}
				/*B�i 199: H�y li?t k� c�c v? tr� m� gi� tr? t?i d� l� s? nguy�n t? trong m?ng 1 chi?u c�c s? nguy�n*/
				void bai199(int a[],int n)
				{		
				for(int i=0;i<n;i++)
		        {
			if(snt(a[i])==1)
			{
				cout<<"a["<<i<<"] ";
			}	
			}
			}
			/*B�i 200: T�nh t?ng c�c ph?n t? trong m?ng*/
	int bai200(int a[],int n)
			{
			int sum=0;
			for(int i=0;i<n;i++)
			{
				sum+=a[i];
			}	
			return sum;
			}
			/*B�i 201: T�nh t?ng c�c gi� tr? duong trong m?ng 1 chi?u c�c s? th?c*/	
			int bai201(int a[],int n)
			{
			int s=0;
			for(int i=0;i<n;i++)
			{
				if(a[i]>0)
				{
				s+=a[i];
			}	
			}
			return s;
			}
	 	/*B�i 202: T�nh t?ng c�c gi� tr? c� ch? s? d?u ti�n l� ch? s? l? trong m?ng 1 chi?u c�c s? nguy�n*/
	int bai202(int a[],int n)
					{
						int sum=0;
						for(int i=0;i<n;i++)
					{
						if(first(a[i])%2!=0)
						{
						sum+=a[i];
						}
						}
						return sum;
						}
		/*B�i 203: Tinh t?ng c�c ch? s? c� ch? s? h�ng ch?c l� 5 trong m?ng 1 chi?u c�c s? nguy�n*/
		bool chuc5(int n)
		{
			n=abs(n);
			if(n<49) return false;
			if(((n/10)%10)==5) return true;
			return false;
			}
			int bai203(int a[],int n)
					{
						int sum=0;
						for(int i=0;i<n;i++)
					{
						if(chuc5(a[i])==1)
						{
						sum+=a[i];
						}
						}
						return sum;
						}
		/*B�i 204: T�nh t?ng c�c gi� tr? l?n hon gi� tr? d?ng li?n tru?c n� trong m?ng 1 chi?u c�c s? th?c*/
		int bai204(int a[],int n)
		{
		int sum=0;
		for(int i=0;i<n-1;i++)
		{
			if(a[i]>a[i+1])
			{
				sum+=a[i];
		}
		}
		return sum;
		}	
			/*B�i 205: T�nh t?ng c�c gi� tr? l?n hon tr? tuy?t d?i 
			c?a gi� tr? d?ng li?n sau n� trong m?ng 1 chi?u c�c s? th?c*/	
			int bai205(int a[],int n)
			{
				int sum=0;
		for(int i=0;i<n-1;i++)
		{
			if(a[i]>abs(a[i+1]))
			{
				sum+=a[i];
		}
		}
		return sum;
		}	
				
	 	/*B�i 206: T�nh t?ng c�c gi� tr? l?n hon c�c gi� tr? xung quanh trong m?ng 1 chi?u c�c s? th?c
 Luu �: M?t gi� tr? trong m?ng c� t?i da 2 gi� tr? xung quang*/

			int bai206(int a[],int n)
			{
				int sum=0;
				if(a[0]>a[1]){
					sum+=a[0];}
					
		for(int i=1;i<n-1;i++)
		{
			if(a[i]>a[i-1]&&a[i]>a[i+1])
			{
				sum+=a[i];
		}
		}
		if(a[n-1]>a[n-2])
		{
			sum+=a[n-1];
			}
		return sum;
		}	
 
 
 
		/*B�i 207: T�nh t?ng c�c ph?n t? �c?c tr?� trong m?ng.
		 M?t ph?n t? du?c g?i l� c?c tr? khi n� l?n hon ho?c nh? hon c�c ph?n t? xung quanh n�*/
		 int bai207(int a[],int n)
		 {
		 	int sum;
		 	if(a[0]!=a[1]){
		 		sum+=a[0];
			 }
			 for(int i=1;i<n-1;i++)
			 {
			 	if(a[i]>a[i-1]&&a[i]>a[i+1]||a[i]<a[i-1]&&a[i]<a[i+1])
			 	{
			 		sum+=a[i];
				 }
				 }
			 if(a[n-1]!=a[n-2])
			 {
			 	sum+=a[n-1];
				 }
		 return sum;
		 }
		/*B�i 208: T�nh t?ng c�c gi� tr? ch�nh phuong trong m?ng 1 chi?u c�c s? nguy�n*/
		int bai208(int a[],int n)
		{
			int sum;
		for(int i=0;i<n;i++)
		{
			if(scp(a[i])==1){
				sum+=a[i];
		}
		}
		return sum;
		}	
			/*B�i 209: T�nh t?ng c�c gi� tr? d?i x?ng trong m?ng c�c s? nguy�n*/
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
			int bai209(int a[],int n)
		{
			int sum;
		for(int i=0;i<n;i++)
		{
			if(sdx(a[i])==1){
				sum+=a[i];
		}
		}
		return sum;
		}	
	 	/*B�i 210: T�nh t?ng c�c gi� tr? c� ch? s? d?u ti�n l� ch? s? ch?n trong m?ng c�c s? nguy�n*/
	 	int bai210(int a[],int n)
		{
			int sum;
		for(int i=0;i<n;i++)
		{
			if(first(a[i])%2==0){
				sum+=a[i];
		}
		}
		return sum;
		}	
		/*B�i 211: T�nh trung b�nh c?ng c�c s? nguy�n t? trong m?ng 1 chi?u c�c s? nguy�n*/
		double bai211(int a[],int n)
		{
			double sum;
			int count;
			for(int i=0;i<n;i++)
		{
			if(snt(a[i])==1)
			{
				sum+=a[i];
				count++;
			}
			}
			return (sum*1.0/count);
			}
			/*B�i 212: T�nh trung b�nh c?ng c�c s? duong trong m?ng 1 chi?u c�c s? th?c*/
			double bai212(int a[],int n)
		{
			double sum;
			int count;
			for(int i=0;i<n;i++)
		{
			if(a[i]>0)
			{
				sum+=a[i];
				count++;
			}
			}
			return (sum*1.0/count);
			}	
			/*B�i 213: T�nh trung b�nh c?ng c�c gi� tr? l?n hon gi� tr? x trong m?ng 1 chi?u c�c s? th?c*/	
			double bai213(int a[],int n,int x)
		{
			double sum;
			int count;
			for(int i=0;i<n;i++)
		{
			if(a[i]>x)
			{
				sum+=a[i];
				count++;
			}
			}
			return (sum*1.0/count);
			}
				
	 	/*B�i 214: T�nh trung b�nh nh�n c�c gi� tr? duong c� trong m?ng 1 chi?u c�c s? th?c*/
	 	double bai214(int a[],int n)
	 	{
	 		double tich=1;
	 		
	 		for(int i=0;i<n;i++)
		{
			tich*=a[i];
						 }
						 return (tich*1.0)/n;
						 }
		/*B�i 215 (*): T�nh kho?ng c�c trung b�nh gi?a c�c gi� tr? trong m?ng*/
		double bai215(int a[],int n)
		{
			double sum;
			int dem;
			for(int i=0;i<n-1;i++)
			{
				for(int j=n-1;j>i;j--)
			{
				sum+=abs(a[j]-a[i]);
				dem++;
			}
			}
			return (sum*1.0/dem);
			}
		/**/	
			/**/	
	 	/**/
		/**/
		/**/	
			/**/	
	 	/**/
		/**/
		int main()
		{
			srand(time(NULL));
			int a[10001];
			int n;
		
			cin>>n;
			
			for(int i=0;i<n;i++)
			{
			a[i]=rand()%100+1;
				}
				for(int i=0;i<n;i++)
			{
				cout<<a[i]<<" ";
				}
				cout<<"\n";
			//bai179(a,n);
			//bai180(a,n);
		//	bai181(a,n);
				//bai182(a,n);
	//	bai183(a,n);
		//bai184(a,n);
	//bai185(a,n);
	//bai186(a,n);
	//bai187(a,n);
		//bai188(a,n);
	//	bai189(a,n);
	//bai190(a,n);	
		//bai191(a,n);
	//	bai192(a,n);
	//	bai193(a,n);
//	bai194(a,n);
//bai195(a,n);	
//bai196(a,n);	
//bai197(a,n);	
//bai198(a,n);	
//bai199(a,n);	
//cout<<"Bai 200: "<<bai200(a,n)<<"\n";
//cout<<"Bai 201: "<<bai201(a,n)<<"\n";	
//cout<<"Bai 202: "<<bai202(a,n)<<"\n";
//cout<<"Bai 203: "<<bai203(a,n)<<"\n";	
cout<<"Bai 204: "<<bai204(a,n)<<"\n";
cout<<"Bai 205: "<<bai205(a,n)<<"\n";	
cout<<"Bai 206: "<<bai206(a,n)<<"\n";
cout<<"Bai 207: "<<bai207(a,n)<<"\n";	
cout<<"Bai 208: "<<bai208(a,n)<<"\n";
cout<<"Bai 209: "<<bai209(a,n)<<"\n";
cout<<"Bai 210: "<<bai210(a,n)<<"\n";
cout<<"Bai 211: "<<bai211(a,n)<<"\n";
cout<<"Bai 212: "<<bai212(a,n)<<"\n";
cout<<"Bai 213: "<<bai213(a,n,9)<<"\n";
cout<<"Bai 214: "<<bai214(a,n)<<"\n";
//cout<<"Bai 215: "<<bai215(a,n)<<"\n";










			return 0;
	}

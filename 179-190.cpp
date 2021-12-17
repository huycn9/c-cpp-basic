#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;
/*
Bài 179: Hãy li?t kê các giá tr? trong m?ng mà th?a di?u ki?n l?n hon giá tr? tuy?t d?i c?a giá tr? d?ng li?n sau nó
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
	/*Bài 180: Hãy li?t kê các giá tr? trong m?ng mà th?a di?u ki?n
	 nh? hon tr? tuy?t d?i c?a giá tr? d?ng li?n sau nó và l?n hon tr? tuy?t d?i c?a giá tr? d?ng li?n tru?c nó*/
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
	/*Bài 181: Cho m?ng 1 chi?u các s? nguyên.
	 Hãy vi?t hàm li?t kê các giá tr? ch?n có ít nh?t 1 lân c?n cung là giá tr? ch?n*/
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
	/*Bài 182: Cho m?ng 1 chi?u các s? th?c. 
	Hãy vi?t hàm li?t kê t?t c? các giá tr? trong m?ng có ít nh?t 1 l?n c?n trái d?u v?i nó*/
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
	/*Bài 183: Hãy li?t kê các v? trí mà giá tr? t?i dó là giá tr? t?i dó là giá tr? l?n nh?t trong m?ng 1 chi?u các s? th?c*/
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
			Bài 184: Hãy li?t kê các v? trí mà giá tr? t?i dó là s? nguyên t? trong m?ng 1 chi?u các s? nguyên
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
			Bài 185: Hãy li?t kê các v? trí mà giá tr? t?i dó là s? chính phuong trong m?ng 1 chi?u các s? nguyên
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
			Bài 186: Hãy li?t kê các v? trí trong m?ng 1 chi?u các s? th?c mà giá tr? t?i dó b?ng giá tr? âm d?u tiên trong m?ng
			
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
				Bài 187: Hãy li?t kê các v? trí mà giá tr? t?i các v? trí dó b?ng giá tr? duong nh? nh?t trong m?ng 1 chi?u các s? th?c
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
				/*Bài 188: Hãy li?t kê các v? trí ch?n l?n nh?t trong m?ng 1 chi?u các s? nguyên*/
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
				/*Bài 189: Hãy li?t kê các giá tr? trong m?ng 1 chi?u các s? nguyên có ch? s? d?u tiên là ch? s? l?*/
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
				/*Bài 190: Hãy li?t kê các giá tr? có toàn ch? s? l? trong m?ng 1 chi?u các s? nguyên*/
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
				/*Bài 191: Hãy li?t kê các giá tr? c?c d?i trong m?ng 1 chi?u các s? th?c. */
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
				/*M?t ph?n t? du?c g?i là c?c d?i khi l?n hon các ph?n t? lân c?n*/
				/*Bài 192: Hãy li?t kê các  giá tr? trong m?ng 1 chi?u các s? nguyên có ch? s? d?u tiên là s? ch?n*/
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
				/*Bài 193: Cho m?ng 1 chi?u các s? nguyên. 
				Hãy vi?t hàm li?t kê các giá tr? trong m?ng có d?ng 3^k.
				
				 N?u m?ng không có giá tr? dó thì tr? v? 0*/
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
					
				/*Bài 194: Cho m?ng 1 chi?u các s? nguyên có nhi?u hon 2 giá tr?. 
				Hãy vi?t hàm li?t kê các c?p giá tr? g?n nhau nh?t*/
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
					
				/*Bài 196: Li?t kê các s? âm trong m?ng 1 chi?u các s? nguyên*/
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
				/*Bài 197: Hãy li?t kê các giá tr? trong m?ng các s? nguyên có ch? s? d?u tiên là ch? s? l?*/
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
				/*Bài 198: Hãy li?t kê các v? trí mà giá tr? t?i dó là giá tr? l?n nh?t trong m?ng 1 chi?u các s? th?c*/
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
				/*Bài 199: Hãy li?t kê các v? trí mà giá tr? t?i dó là s? nguyên t? trong m?ng 1 chi?u các s? nguyên*/
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
			/*Bài 200: Tính t?ng các ph?n t? trong m?ng*/
	int bai200(int a[],int n)
			{
			int sum=0;
			for(int i=0;i<n;i++)
			{
				sum+=a[i];
			}	
			return sum;
			}
			/*Bài 201: Tính t?ng các giá tr? duong trong m?ng 1 chi?u các s? th?c*/	
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
	 	/*Bài 202: Tính t?ng các giá tr? có ch? s? d?u tiên là ch? s? l? trong m?ng 1 chi?u các s? nguyên*/
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
		/*Bài 203: Tinh t?ng các ch? s? có ch? s? hàng ch?c là 5 trong m?ng 1 chi?u các s? nguyên*/
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
		/*Bài 204: Tính t?ng các giá tr? l?n hon giá tr? d?ng li?n tru?c nó trong m?ng 1 chi?u các s? th?c*/
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
			/*Bài 205: Tính t?ng các giá tr? l?n hon tr? tuy?t d?i 
			c?a giá tr? d?ng li?n sau nó trong m?ng 1 chi?u các s? th?c*/	
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
				
	 	/*Bài 206: Tính t?ng các giá tr? l?n hon các giá tr? xung quanh trong m?ng 1 chi?u các s? th?c
 Luu ý: M?t giá tr? trong m?ng có t?i da 2 giá tr? xung quang*/

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
 
 
 
		/*Bài 207: Tính t?ng các ph?n t? “c?c tr?” trong m?ng.
		 M?t ph?n t? du?c g?i là c?c tr? khi nó l?n hon ho?c nh? hon các ph?n t? xung quanh nó*/
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
		/*Bài 208: Tính t?ng các giá tr? chính phuong trong m?ng 1 chi?u các s? nguyên*/
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
			/*Bài 209: Tính t?ng các giá tr? d?i x?ng trong m?ng các s? nguyên*/
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
	 	/*Bài 210: Tính t?ng các giá tr? có ch? s? d?u tiên là ch? s? ch?n trong m?ng các s? nguyên*/
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
		/*Bài 211: Tính trung bình c?ng các s? nguyên t? trong m?ng 1 chi?u các s? nguyên*/
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
			/*Bài 212: Tính trung bình c?ng các s? duong trong m?ng 1 chi?u các s? th?c*/
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
			/*Bài 213: Tính trung bình c?ng các giá tr? l?n hon giá tr? x trong m?ng 1 chi?u các s? th?c*/	
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
				
	 	/*Bài 214: Tính trung bình nhân các giá tr? duong có trong m?ng 1 chi?u các s? th?c*/
	 	double bai214(int a[],int n)
	 	{
	 		double tich=1;
	 		
	 		for(int i=0;i<n;i++)
		{
			tich*=a[i];
						 }
						 return (tich*1.0)/n;
						 }
		/*Bài 215 (*): Tính kho?ng các trung bình gi?a các giá tr? trong m?ng*/
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

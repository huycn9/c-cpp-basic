#include<stdio.h>

int main()
{
	int n,index=0;
	int b[10001];
	int j=0;
	do{
		scanf("%d",&n);
		if(n<0){
		b[j++]=n;
		index=-1;
		}
	}
	while(n!=0);
	if(index==0)
	{
	printf("NOT FOUND");
	}
	else{
		for(int i=0;i<j;i++)
		{
			printf("%d ",b[i]);
	}
		}
	}

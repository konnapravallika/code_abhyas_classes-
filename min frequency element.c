#include<stdio.h>
main()
{
	int a[10],fr[10],n,i,j;
	printf("enter no of values \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter element : ");
		scanf("%d",&a[i]);
		fr[i]=1;
	}
	
	for(i=0;i<n;i++)
	{
		if(fr[i]==0)
		continue;
		for(j=i+1;j<n;j++)
		{
			if (fr[j]==0)
			continue;
			if(a[i]==a[j])
			{
				fr[i]++;
				fr[j]=0;
			}
		}
	}
	printf("\n frequencies are \n");
	for(i=0;i<n;i++)
	{
		if(fr[i]!=0)
		printf("\n frequency of %d is %d \n",a[i],fr[i]);
	}
	int min=fr[0];
	int minindex=0;
	for(i=1;i<n;i++){
		if(fr[i]<min&& fr[i]!=0){
			min=fr[i];
			minindex=i;
		}
	}
	printf("frequency of min elemt is %d and frequency is %d",a[minindex],min);
	
	
	
}

#include<stdio.h>

main()
{
	int a[1000];
	int b[1000];
	int c[2000];
	int i,n,n1;
	printf("enter array of a size : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("enter array of b size : ");
	scanf("%d",&n1);
	
	for(i=0;i<n1;i++)
	{
		printf("b[%d] : ",i);
		scanf("%d",&b[i]);
	}
	
		for(i=0;i<n;i++)
	{
		c[i]=a[i];
		printf("%d ",c[i]);
	}
	
		for(i=0;i<n1;i++)
	{
		c[i]=b[i];
		printf("%d ",c[i]);
	}
	
}

#include<stdio.h>

main()
{
	int i;
	int x[3]={1,2,3};
	int y[3]={4,5,6};
	int z[3];
	for(i=0;i<3;i++)
	{
		z[i]=x[i]+y[i];
		printf("%d",z[i]);
	}
	
}

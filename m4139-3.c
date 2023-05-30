#include <stdio.h>

 main()
{

	int a[100] ;
	int i,n,z=0;
	
	printf("enter size of array : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		z=z+a[i];
	}
	
	printf("The length of the array is : %d\n", z);
	printf("average of all elements : %d",z/n);

}


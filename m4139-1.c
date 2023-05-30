#include<stdio.h>

 main() 
 {
   int i, a[100], n;

   printf("\nEnter no of elements :");
   scanf("%d", &n);

   printf("\nEnter the values :");
   for (i = 0; i < n; i++)
    {
      scanf("%d", &a[i]);
   }

   for (i = 0; i < n; i++) 
   {
      printf("\na[%d] = %d", i, a[i]);
   }
 

}

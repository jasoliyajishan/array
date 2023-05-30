#include<stdio.h>

 main() 
 {
   int i, a[100], num;

   printf("\nEnter no of elements :");
   scanf("%d", &num);

   printf("\nEnter the values :");
   for (i = 0; i < num; i++)
    {
      scanf("%d", &a[i]);
   }

   for (i = 0; i < num; i++) 
   {
      printf("\na[%d] = %d", i, a[i]);
   }

}

#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int arr1[size], arr2[size], result[size];

    printf("Enter the elements of the first array: ");
    for(int i=0;i<arr1[size]; i++) 
	{
        scanf("%d",&arr1[i]);
    }

    printf("Enter the elements of the second array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Resultant array after addition: ");
    for (int i = 0; i < size; i++) 
	{
        result[i] = arr1[i] + arr2[i];
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}


#include<stdio.h>

int main()
{
    int n,arr[100],i;
    printf("Enter the size of Array:"); //sanjida,213902066
    scanf("%d",&n);

    printf("\nEnter the values:");

    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
        for(i=0; i<n; i++)
            printf("%d",arr[i]);

    return 0;
}


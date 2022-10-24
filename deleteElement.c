//A C program to delete an element from a linear array.

#include<stdio.h>

int main()
{
    int LA[100], N, K, J, i, ITEM;
    printf("Enter the number of elements in array: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        printf("Enter element no %d: ", i);
        scanf("%d", &LA[i]);
    }

    printf("Enter the position of the item: ");
    scanf("%d", &K);
    ITEM=LA[K];

    for(J=K; J<=N-1; J++)
    {
        LA[J]=LA[J+1];
    }

    N=N-1;

    printf("Your deleted item: %d", ITEM);
    printf("\nAfter deleting:\n");
    for(i=1; i<=N; i++)
    {
        printf("%d ", LA[i]);
    }
    return 0;
}

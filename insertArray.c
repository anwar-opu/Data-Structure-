//
// Created by HP on 24-Oct-22.
//
//A C program to insert an element into a linear array.

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
    printf("Enter the item you want to insert: ");
    scanf("%d", &ITEM);
    J=N;

    while(J>=K)
    {
        LA[J+1]=LA[J];
        J=J-1;
    }

    LA[K]=ITEM;
    N=N+1;

    printf("After inserting:\n");
    for(i=1; i<=N; i++)
    {
        printf("%d ", LA[i]);
    }
    return 0;
}
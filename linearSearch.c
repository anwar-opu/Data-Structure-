//
// Created by HP on 24-Oct-22.
//
//A C program to search an element from an array using linear search algorithm.

#include<stdio.h>

int main()
{
    int DATA[100], N, ITEM, LOC=0, K=1;
    printf("Enter the number of elements in array: ");
    scanf("%d", &N);

    for(int i=1; i<=N; i++)
    {
        printf("Enter element no %d: ", i);
        scanf("%d", &DATA[i]);
    }

    printf("Your DATA: ");
    for(int i=1; i<=N; i++)
    {
        printf("%d  ", DATA[i]);
    }

    printf("\nEnter the ITEM you want to search: ");
    scanf("%d", &ITEM);

    while(LOC==0 && K<=N)
    {
        if(ITEM==DATA[K]) LOC=K;
        else K=K+1;
    }

    if(LOC==0)
        printf("ITEM not found!");
    else
        printf("ITEM: %d found at LOC: %d", ITEM, K);
    return 0;
}
//
// Created by HP on 24-Oct-22.
//
//A C program to search an element from an array using binary search algorithm.

#include<stdio.h>

int main()
{
    int DATA[100], N, i, LB, UB, BEG, END, ITEM, MID;
    printf("Enter the number of elements in array: ");
    scanf("%d", &N);

    LB=1, UB=N;
    //***YOUR ENTERED ELEMENTS MUST BE SORTED***

    for(i=1; i<=N; i++)
    {
        printf("Enter element no %d: ", i);
        scanf("%d", &DATA[i]);
    }

    BEG=LB, END=UB, MID=((BEG+END)/2);
    printf("\nEnter the ITEM you want to search: ");
    scanf("%d", &ITEM);

    while((BEG<=END) && (DATA[MID]!=ITEM))
    {
        if(ITEM<DATA[MID]) END=MID-1;
        else BEG=MID+1;
        MID=((BEG+END)/2);
    }

    if(DATA[MID]==ITEM)
    {
        int LOC=MID;
        printf("ITEM %d found at LOC: %d\n", ITEM, LOC);
    }
    else
    {
        int LOC=0;
        printf("ITEM %d not found! So LOC: %d\n", ITEM, LOC);
    }
    return 0;
}

//
// Created by HP on 24-Oct-22.
//
//A C program to sort an array of integers using bubble sort algorithm.

#include<stdio.h>

int main()
{
    int DATA[100], i, N, K, PTR, TEMP;
    printf("Enter the number of elements in array: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        printf("Enter element no %d: ", i);
        scanf("%d", &DATA[i]);
    }

    for(K=1; K<=N-1; K++)
    {
        PTR=1;
        while(PTR<=N-K)
        {
            if(DATA[PTR]>DATA[PTR+1])
            {
                //Interchanging
                TEMP=DATA[PTR];
                DATA[PTR]=DATA[PTR+1];
                DATA[PTR+1]=TEMP;
            }
            PTR=PTR+1;
        }
    }

    printf("\nSorted list:\n");
    for(i=1; i<=N; i++)
    {
        printf("%d  ", DATA[i]);
    }
    return 0;
}

//
// Created by HP on 24-Oct-22.
//
//A C program to sort an array of integers using quicksort algorithm.

#include<stdio.h>

void QUICK(int A[], int, int);

void QUICK(int A[], int LOW, int HIGH)
{
    int pivot;
    if(HIGH>LOW)
    {
        pivot = PARTITION(A, LOW, HIGH);
        QUICK(A, LOW, pivot-1);
        QUICK(A, pivot+1, HIGH);
    }
}

int PARTITION(int A[], int LOW, int HIGH)
{
    int LEFT, RIGHT;
    int pivot_item;
    int pivot=LEFT=LOW;
    pivot_item=A[LOW];
    RIGHT=HIGH;

    while(LEFT<RIGHT)
    {
        //move left while item<pivot
        while(A[LEFT]<=pivot_item) LEFT++;
        //move right while item<pivot
        while(A[RIGHT]>pivot_item) RIGHT--;

        if(LEFT<RIGHT)
        {
            int TEMP;
            TEMP=A[LEFT];
            A[LEFT]=A[RIGHT];
            A[RIGHT]=TEMP;
        }
    }

    //right is final position for the pivot
    A[LOW]=A[RIGHT];
    A[RIGHT]=pivot_item;
    return RIGHT;
}

int main()
{
    int A[50], i, N;
    printf("Enter the number of elements in array: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        printf("Enter element no %d: ", i);
        scanf("%d", &A[i]);
    }

    QUICK(A, 1, N);

    printf("\nSorted List:\n");
    for(i=1; i<=N; i++)
        printf("%d  ", A[i]);
    return 0;
}
//A C program to find the largest and smallest element from an array.

#include<stdio.h>

int main()
{
    int N, DATA[100], LOC_MAX=1, LOC_MIN=1;
    printf("Enter the number of elements in array: ");
    scanf("%d", &N);

    for(int K=1; K<=N; K++)
    {
        printf("Enter element no %d: ", K);
        scanf("%d", &DATA[K]);
    }

    int MAX=DATA[1];
    int MIN=DATA[1];

    for(int K=2; K<=N; K++)
    {
        if(DATA[K]>MAX)
        {
            MAX=DATA[K];
            LOC_MAX=K;
        }
        if(DATA[K]<MIN)
        {
            MIN=DATA[K];
            LOC_MIN=K;
        }
    }

    printf(" Largest element: %d and it's location: %d", MAX, LOC_MAX);
    printf("\nSmallest element: %d and it's location: %d", MIN, LOC_MIN);
    return 0;
}
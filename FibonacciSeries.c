//
// Created by HP on 24-Oct-22.
//
//A C program to find the Fibonacci series using recursive function.

#include<stdio.h>

int FIBONACCI(int N)
{
    int FIB, FIBA, FIBB;
    if(N==0 || N==1) return N;
    FIBA=FIBONACCI(N-2);
    FIBB=FIBONACCI(N-1);
    FIB=FIBA+FIBB;
    return FIB;
}

int main()
{
    int N;
    printf("Enter the number of elements in the series: ");
    scanf("%d", &N);
    printf("Fibonacci series with %d elements:\n", N);
    for(int i=0; i<N; i++)
        printf("%d ", FIBONACCI(i));
    return 0;
}

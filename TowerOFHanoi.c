//
// Created by HP on 24-Oct-22.
//
//A C program for Tower of Hanoi problem.

#include<stdio.h>

int i=1;

int TOWER(int N, char BEG, char AUX, char END)
{
    if(N==1)
    {
        printf("%d: %c --> %c\n", i++, BEG, END);
        return;
    }

    TOWER(N-1, BEG, END, AUX);
    printf("%d: %c --> %c\n", i++, BEG, END);
    TOWER(N-1, AUX, BEG, END);
    return;
}

int main()
{
    char BEG='A', AUX='B', END='C';
    int N;
    printf("Enter the number of discs: ");
    scanf("%d", &N);
    printf("Solution:\n\n");

    TOWER(N, BEG, AUX, END);
    return 0;
}
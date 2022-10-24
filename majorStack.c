//
// Created by HP on 24-Oct-22.
//
//A C program to implement all major stack operations.

#include<stdio.h>
#include<stdlib.h>

int TOP=0, STACK[5], MAXSTK=5;

void PUSH(int ITEM)
{
    if(TOP==MAXSTK)
    {
        printf("Overflow.");
        exit(0);
    }

    STACK[TOP]=ITEM;
    TOP=TOP+1;
    printf("STACK: ");

    for(int i=0; i<MAXSTK; i++)
    {
        printf("%d  ", STACK[i]);
    }

    printf("TOP: %d", TOP);
}

void POP()
{
    if(TOP==0)
    {
        printf("Underflow.");
        exit(0);
    }

    int ITEM=TOP-1; //Array index starts from 0
    printf("ITEM: %d deleted from the STACK.", STACK[ITEM]);
    TOP=TOP-1;
    STACK[TOP]=0;
    printf("\nSTACK: ");

    for(int i=0; i<MAXSTK; i++)
    {
        printf("%d  ", STACK[i]);
    }

    printf("TOP: %d", TOP);
}

int main()
{
    int choice;
    do
    {
        printf("\nPress: 1 for PUSH.\n");
        printf("Press: 2 for POP.\n");
        printf("Press: 3 for EXIT.\nPress: ");
        scanf("%d", &choice);

        if(choice==1)
        {
            int ITEM;
            printf("Enter your ITEM: ");
            scanf("%d", &ITEM);
            PUSH(ITEM);
        }
        else if(choice==2) POP();
        else exit(0);
    }while(1);

    return 0;
}
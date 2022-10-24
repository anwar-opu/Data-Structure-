//
// Created by HP on 24-Oct-22.
//
//A C program to implement all major queue operations.

#include<stdio.h>
#include<stdlib.h>

int FRONT=0, REAR=0, N=5, QUEUE[5];

void QINSERT(int ITEM)
{
    if(((FRONT==1)&&(REAR==N))||(FRONT==REAR+1))
    {
        printf("Overflow.");
        exit(0);
    }

    if(FRONT==0)
    {
        FRONT=1; REAR=1;
    }

    else if(REAR==N) REAR=1;
    else REAR=REAR+1;

    QUEUE[REAR]=ITEM;
    printf("QUEUE: ");

    for(int i=1; i<=N; i++)
    {
        printf("%d  ", QUEUE[i]);
    }

    printf("FRONT: %d, REAR: %d", FRONT, REAR);
}

void QDELETE()
{
    if(FRONT==0)
    {
        printf("Underflow.");
        exit(0);
    }

    int ITEM=FRONT;
    printf("ITEM: %d deleted from the QUEUE.", QUEUE[ITEM]);
    QUEUE[FRONT]=0;

    if(FRONT==REAR)
    {
        FRONT=0; REAR=0;
    }

    else if(FRONT==N) FRONT=1;
    else FRONT=FRONT+1;

    printf("\nQUEUE: ");

    for(int i=1; i<=N; i++)
    {
        printf("%d  ", QUEUE[i]);
    }

    printf("FRONT: %d, REAR: %d", FRONT, REAR);
}

int main()
{
    int choice;
    do
    {
        printf("\nPress: 1 for INSERT.\n");
        printf("Press: 2 for DELETE.\n");
        printf("Press: 3 for EXIT.\nPress: ");
        scanf("%d", &choice);

        if(choice==1)
        {
            int ITEM;
            printf("Enter your ITEM: ");
            scanf("%d", &ITEM);
            QINSERT(ITEM);
        }
        else if(choice==2) QDELETE();
        else exit(0);
    }while(1);

    return 0;
}

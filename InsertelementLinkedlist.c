//
// Created by HP on 24-Oct-22.
//
//A C program to insert an element into the linked list.

#include<stdio.h>

//Create a node
struct Node
{
    int data;
    struct Node* next;
};

//Function for inserting item
void insertAtBeginning(struct Node** head_ref, int new_data)
{
    //Allocate memory to a node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    //Insert the data
    new_node->data = new_data;

    new_node->next = (*head_ref);

    //Move head to new node
    (*head_ref) = new_node;
}

//Printing linked list
void printList(struct Node* node)
{
    while (node != NULL)
    {
        printf(" %d ", node->data);
        node = node->next;
    }
}

int main()
{
    struct Node* head = NULL; //Linked list is empty
    int N;
    float ITEM;
    printf("Enter the number of items in linked list: ");
    scanf("%d", &N);

    for(int i=1; i<=N; i++)
    {
        printf("\n\nEnter item no %d: ", i);
        scanf("%f", &ITEM);

        insertAtBeginning(&head, ITEM); //Inserting

        //Displaying linked list
        printf("Linked list: ");
        printList(head);
    }

    printf("\nDone");
    return 0;
}

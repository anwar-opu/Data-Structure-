//
// Created by HP on 24-Oct-22.
//
//A C program to delete an element from the linked list.

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

//Delete a node
void deleteNode(struct Node** head_ref, int key)
{
    struct Node *temp = *head_ref, *prev;

    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;
        free(temp);
        return;
    }

    //Find the key to be deleted
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    //If the key is not present
    if (temp == NULL) return;

    //Remove the node
    prev->next = temp->next;

    free(temp);
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
    }

    //Displaying linked list
    printf("\nLinked LIST: ");
    printList(head);

    //Deleting an item
    printf("\n\nEnter the ITEM you want to delete: ");
    scanf("%f", &ITEM);
    deleteNode(&head, ITEM);

    //Displaying linked list
    printf("\nLinked LIST: ");
    printList(head);

    printf("\nDone");
    return 0;
}

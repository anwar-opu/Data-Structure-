//
// Created by HP on 24-Oct-22.
//
//A C program to evaluate postfix notation expression.

#include<stdio.h>
#include<string.h>
#define MAX 50

int STACK[MAX];
char post[MAX];
int top=-1;
void pushstack(int tmp);
void calculator(char c);

int main()
{
    printf("Enter a postfix notation expression:\n");
    gets(post);

    for(int i=0; i<strlen(post); i++)
    {
        if(post[i]>='0' && post[i]<='9')
            pushstack(i);

        if(post[i]=='+'||post[i]=='-'||post[i]=='*'||post[i]=='/'||post[i]=='^')
            calculator(post[i]);
    }

    printf("\nResult: %d", STACK[top]);
    return 0;
}

void pushstack(int tmp)
{
    top++;
    STACK[top]=(int)(post[tmp]-48);
}

void calculator(char c)
{
    int a, b, ans;
    a=STACK[top];
    STACK[top]='\0';
    top--;
    b=STACK[top];
    STACK[top]='\0';
    top--;

    switch(c)
    {
        case '+':
            ans=b+a;
            break;
        case '-':
            ans=b-a;
            break;
        case '*':
            ans=b*a;
            break;
        case '/':
            ans=b/a;
            break;
        case '^':
            ans=b^a;
            break;
        default:
            ans=0;
    }

    top++;
    STACK[top]=ans;
}
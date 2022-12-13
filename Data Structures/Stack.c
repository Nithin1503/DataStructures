#include <stdio.h>
#define CAP 5
int top = -1;
int stack[CAP];
int isFull()
{
    if (top == CAP - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(int ele)
{
    printf("PUSHED ELEMENT:");
    if (isFull())
    {
        printf("Stack is full");
    }
    else
    {
        top++;
        stack[top] = ele;
        printf("%d\n", stack[top]);
    }
}
int pop()
{
    int ele1;
    printf("POPPED ELEMENT:");
    if (isEmpty())
    {
        printf("Stack is empty");
        return 0;
    }
    else
    {
        ele1 = stack[top];
        printf("%d\n", ele1);
        --top;
    }
    return top;
}
int peek()
{
    printf("PEEK ELEMENTS:\n");
    if (isEmpty())
    {
        return 0;
    }
    else
    {
        printf("%d\n", stack[top]);
        --top;
        printf("%d\n", stack[top]);
    }
    return top;
}
void traverse()
{
    printf("TRAVERSE:\n");
    if (isEmpty())
    {
        printf("Stack is empty");
    }
    else
    {
        for (int i = top; i >= 0; i--)
            printf("%d\n", stack[i]);
    }
}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    pop();
    pop();
    peek();
    traverse();
}

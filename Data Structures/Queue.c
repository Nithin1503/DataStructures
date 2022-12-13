#include<stdio.h>
#define CAP 5
int que[CAP], front=0, rear=0;
void insert(int ele)
{
    if(CAP==rear)
    {
        printf("Stack is full.");
    }
    else
    {
        que[rear]= ele;
        rear++;
    }
}
void traverse()
{  printf("Traverse Elements:\n");
    if(front==rear)
    {
        printf("queue is empty");
    }
    else
    {
        for(int i=0;i<rear;i++)
        printf("%d\n", que[i]);
    }
}
void delete()
{ 
    if(front==rear)
    {
        printf("queue is empty");
    }
    else
    {
     printf("Deleted element is:\n%d\n", que[front]);
     for(int i=0;i<rear;i++)
     {
         que[i]=que[i+1];
     }
     rear--;
    }
}
int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    traverse();
    delete();
    traverse();
}

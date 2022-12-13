#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *root = NULL;
void append()
{
    struct node *temp;
    temp =(struct node*)malloc(sizeof(struct node));
    printf("Enter the element:");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(root==NULL)
    {root = temp;}
    else
    {
        struct node *p;
        p = root;
        while(p->link!=NULL)
        {
            
            p=p->link;
        }
        p->link =temp;
        printf("%d\n",p->link->data);
    }
}
int length()
{   int count=0;
    struct node* temp1;
    temp1 =root;
    while(temp1!=NULL)
    {   count++;
        temp1=temp1->link;
    }
    printf("Length of linked list is %d\n",count);
    return count;
}
void addatbegin()
{
    struct node* temp2;
    temp2= (struct node*)malloc(sizeof(struct node));
    printf("Enter the node data at begin:");
    scanf("%d",&temp2->data);
    temp2->link = NULL;
    if(root==NULL)
    {
        root =temp2;
    }
    else
    {
        temp2->link=root;
        root = temp2;
    }
}
void insert()
{
    struct node *temp3, *p;
    temp3=(struct node*)malloc(sizeof(struct node));
    int loc, size, i=1;
    printf("Enter the location u want to insert:");
    scanf("%d",&loc);
    loc--;
    size=length();
    if(loc>size)
    {
     printf("Invalid input.The size of linked list is %d only.\n",size);
    }
    else
    { p=root;
     while(i<loc)
     {
         p=p->link;
         i++;
     }
    printf("Enter the node data:");
    scanf("%d",&temp3->data);
    temp3->link = p->link;  //right
    p->link=temp3;         //left
    }
}
void display()
{
    struct node *temp4;
    temp4=root;
    if(temp4==NULL)
    {
        printf("No nodes in Linked List.");
    }
    else
    {
      while(temp4!= NULL)
      {
          printf("%d\n",temp4->data);
          temp4 =temp4->link;
      }
    }
}
void delete()
{
    struct node *temp5; 
    int loc, size, i=1;
    size=length();
    printf("Enter the location u want to delete:");
    scanf("%d",&loc);
    if(loc>size)
    {
     printf("Invalid input.The size of linked list is %d only.\n",size);
    }
    else if(loc==1)
    {
        temp5=root;
        root=temp5->link;
        temp5->link=NULL;
        free(temp5);
    }
    else
    {  struct node *p, *q;
        p=root;
       while(i<loc-1)
       {
           p=p->link;
           i++;
       }
       q=p->link;
       p->link=q->link;
       q->link=NULL;
       free(q);
    }
}
void swap()
{
    struct node *p, *q, *r;
    p=root;
    int i=1,loc;
    printf("Enter the loc u want to swap:");
    scanf("%d", &loc);
    if(loc==1)
    {
        struct node *temp6,*s, *p; 
        p=root;
        temp6=root;
        s=temp6->link;
        temp6->link=temp6->link->link;
        s->link=temp6;
        root=s;
    }
    else
    {
      while(i<(loc-1))
     {
        p=p->link;
        i++;
     }
     q=p->link;
     r=q->link;
     q->link=r->link;
     r->link = q;
     p->link =r;}
}
int main()
{ 
  append();
  append();
  append();
  addatbegin();
  length();
  insert();
  display();
  delete();
  display();
  swap();
  display();
}

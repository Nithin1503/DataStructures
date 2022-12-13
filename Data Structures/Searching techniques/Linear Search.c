#include<stdio.h>
int main()
{
    int arr[10]={12,13,15,16,98,40,2,1,65,89};
    int key, flag=0, i;
    printf("Enter the element u want to search:");
    scanf("%d",&key);
    for( i=0;i<10;i++)
    {
        if(arr[i]==key)
        {
            flag=1;
            break;
        }
    }
    if(!flag)
    {
        printf("Not found");
    }
    else
    {
        printf("Element found at location %d", i);
    }
}
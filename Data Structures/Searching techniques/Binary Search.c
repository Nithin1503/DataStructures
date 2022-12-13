#include<stdio.h>
int main()
{
    int arr[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key, flag=0, low=0, high=9;
    int mid;
    printf("Enter the element u want to search:");
    scanf("%d",&key);
    while(low<=high)
    {   mid=(high+low)/2;
        if(key<arr[mid])
        {
            high=mid-1;
        }
        else if(key>arr[mid])
        {
            low=mid+1;
        }
        else if(key==arr[mid])
        {
            flag=1;
            break;
        }
    }
    if(!flag)
    {
        printf("Element Not found");
    }
    else
    {
        printf("Element found at location %d", mid);
    }
}
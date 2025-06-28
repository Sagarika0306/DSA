#include<stdio.h>
void Lsearch(int a[],int n,int item)
{
    int f=0,i;
    for(i=0;i<n;i++)
    {
        if(a[i]==item)
        {
            f=1;
            break;
        }
    }
    if(f==0)
    {
        printf("Item not found.");
    }
    else
    {
        printf("Item found at position %d",i+1);
    }
}
int main()
{
    int i,a[30],n,item;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter %d element",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter item to search:");
    scanf("%d",&item);
    Lsearch(a,n,item);
}
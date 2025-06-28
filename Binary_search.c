#include<stdio.h>
void Bsearch(int a[],int n,int item)
{
    int min,max,mid,f;
    min=0;
    max=n-1;
    f=0;
    while(max>=min)
    {
        mid=(min+max)/2;
        if(a[mid]==item)
        {
            f=1;
            break;
        }
        else if(a[mid>item])
        {
            max=mid-1;
        }
        else
        {
            min=mid+1;
        }
    }
    if(f==0)
    {
        printf("Not found.");
    }
    else
    {
        printf("Item found at %d position",mid+1);
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
    Bsearch(a,n,item);
}
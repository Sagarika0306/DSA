#include<stdio.h>
void merge(int a[],int min,int mid,int max)
{
    int i,j,k,b[30];
    for(i=min;i<=max;i++)
    {
        b[i]=a[i];
    }
    i=min;
    j=mid+1;
    k=min;
    while(i<=mid && j<=max)
    {
        if(b[i]<b[j])
        {
            a[k]=b[i];
            k++;
            i++;
        }
        else
        {
            a[k]=b[j];
            k++;
            j++;
        }
    }
    while(i<=mid)
    {
        a[k]=b[i];
        k++;
        i++;
    }
    while(j<=max)
    {
        a[k]=b[j];
        k++;
        j++;
    }
}
void divide(int a[],int min,int max)
{
    int mid;
    if(min<max)
    {
        mid=(min+max)/2;
        divide(a,min,mid);
        divide(a,mid+1,max);
        merge(a,min,mid,max);
    }
    
}
int main()
{
    int i,n,a[30];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    divide(a,0,n-1);
    printf("After sorting:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
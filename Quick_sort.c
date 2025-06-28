#include<stdio.h>
int partition(int a[],int min, int max)
{
    int pivot=min,t;
    while(min<max)
    {
        while(a[pivot]>=a[min])
        {
            min++;
        }
        while(a[pivot]<a[max])
        {
            max--;
        }
        if(min<max)
        {
            t=a[min];
            a[min]=a[max];
            a[max]=t;
        }
    }
    t=a[pivot];
    a[pivot]=a[max];
    a[max]=t;
    return max;
}
void qsort(int a[],int min,int max)
{
    int p;
    if(min<max)
    {
        p=partition(a,min,max);
        qsort(a,min,p-1);
        qsort(a,p+1,max);
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
    qsort(a,0,n-1);
    printf("After sorting:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
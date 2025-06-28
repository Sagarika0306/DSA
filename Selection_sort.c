#include<stdio.h>
void Ssort(int a[],int n)
{
    int i,j,t,min_in;
    for(i=0;i<n-1;i++)
    {
        min_in=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min_in])
            {
                min_in=j;
            }
        }
        t=a[i];
        a[i]=a[min_in];
        a[min_in]=t;
    }
}
int main()
{
    int a[30],i,n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    Ssort(a,n);
    printf("After sorting:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
#include<stdio.h>
void Bsort(int a[],int n)
{
    int i,j,t,f=0;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                f=1;
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
        if(f==0)
        {
            break;
        }
    }
}
int main()
{
    int a[30],i,n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter %d element:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    Bsort(a,n);
    printf("After sorting:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
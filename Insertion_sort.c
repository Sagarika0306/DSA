#include<stdio.h>
void Isort(int a[],int n)
{
    int i,j,t;
    for(i=1;i<n;i++)
    {
        t=a[i];
        j=i-1;
        while(a[j]>t && j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=t;
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
    Isort(a,n);
    printf("After sorting:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
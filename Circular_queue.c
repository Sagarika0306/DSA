//Circular queue
#include<stdio.h>
#include<stdlib.h>
int a[30],n,f=-1,r=-1;
void CQ_insert(int item)
{
	if(f==-1 &&r==-1)
	{
		f=r=0;
		a[r]=item;
	}
	else{
		r=(r+1)%n;
		a[r]=item;
	}

}
int CQ_del()
{
	int t;
	if(f==r)
	{
		t=a[f];
		f=r=-1;
	}
	else{
		t=a[f];
		f=(f+1)%n;
	}
	return t;
}
void CQ_display()
{
	int i=f;
	while(i!=r)
	{
		printf("\t%d",a[i]);
		i=(i+1)%n;
	}
	printf("\t%d",a[i]);
}
int main()
{
	int item,ch;
	printf("Enter queue size:");
	scanf("%d",&n);
	while(1)
	{
		printf("\n1 for insert");
		printf("\n2 for delete");
		printf("\n3 for display");
		printf("\n4 for exit");
		printf("\nEnter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				    if(f==(r+1)%n)
				       printf("\nCQ is full");
				    else{
				    	printf("\nEnter element to insert");
				    	scanf("%d",&item);
				    	CQ_insert(item);
					}
					break;
			case 2:
				   if(f==-1 && r==-1)
				      printf("\nCQ is empty");
				    else
				      printf("\nDeleted element is %d",CQ_del());
				    break;
			case 3:if(f==-1 && r==-1)
				      printf("CQ is empty");
				    else
				     CQ_display();
				     break;
			case 4:
				    exit(0);
		}
	}
}

//Implement queue
#include<stdio.h>
#include<stdlib.h>//exit
int a[30],front=-1,rear=-1,n;
void enqueue(int item)
{
	if(front==-1 && rear==-1)
	{
		front=0;
		rear=0;
		a[rear]=item;
	}
	else{
		rear=rear+1;
		a[rear]=item;
	}
}
int dequeue()
{
	int t;
	t=a[front];
	front=front+1;
	return t;
}
void display()
{
	int i;
	for(i=front;i<=rear;i++)
	  printf("%d ",a[i]);
}
int main()
{
	int item,ch;
	printf("Enter size of queue");
	scanf("%d",&n);
	while(1)//infite loop
	{
		printf("\n1 for enqueeue");
		printf("\n2 for dequeue");
		printf("\n3 for display");
		printf("\n4 for exit");
		printf("\nEnter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: if(rear==n-1)
			         printf("Queue is full");
			        else{
			        	printf("Enter element to insert:");
			        	scanf("%d",&item);
			        	enqueue(item);
					}
					break;
			case 2:
				  if((front==-1 && rear==-1)||(front>rear))
				    printf("\nQueue is empty");
				  else{
				  	printf("\nDeleted element is %d",dequeue());
				  }
				  break;
			case 3:display();
			        break;
			case 4:exit(0);
		}
	}
}








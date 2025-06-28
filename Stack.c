//stack implementation
#include<stdio.h>//printf() scanf()
#include<stdlib.h>//exit()
int a[30],n,top=-1;
void push(int item)
{
	//top=top+1;
	//a[top]=item;   
	a[++top]=item;
}
int pop()
{
	//return a[top--];
	int t;
	t=a[top];
	top=top-1;
	return t;
}
void display()
{
	int i;
	for(i=0;i<=top;i++)
	  printf("\t%d",a[i]);
}
int main()
{
	int ch,item;
	printf("Enter size of the stack");
	scanf("%d",&n);
	while(1)//infinite loop
	{
		printf("\n1 for push");
		printf("\n2 for pop");
		printf("\n3 for display");
		printf("\n4 for exit");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				  if(top==n-1)
				    printf("\n stack overflow");
				  else{
				  	printf("Enter element to push");
				  	scanf("%d",&item);
				  	push(item);
				  }
				  break;
			case 2:
				if(top==-1)
				  printf("\nStack underflow");
				else{
					printf("\nPoped elemen is %d",pop());
				}
				break;
			case 3:
				  display();
				  break;
			case 4:
			      exit(0);	
			
		}
		
	}
	
}











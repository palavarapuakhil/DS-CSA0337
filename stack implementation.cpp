#include<stdio.h>
#include<stdlib.h>
#define size 5
int stk[size],top=-1;
void push()
{
	int ele;
	printf("enter the element");
	scanf("%d",ele);
	if (top >= size-1)
	printf("the stack is full");
	else
	{
		top++;
		stk[top]=ele;
	}
}

void pop()
{
	int ele;
	if (top==-1)
	printf("the stack is empty");
	else 
	{
		ele=stk[top];
		top=top-1;
		printf("the elements are %d",ele);
	}
}

void peek()
{
	int ele;
	if (top==-1)
	printf("the stack is empty");
	else 
	printf("the TOP of the stack is = %d",stk
	[top]);
}
void display()
{
	int i;
		if (top==-1)
	printf("the stack is empty");
	else
	       for(i=top; i>=0; i--)
            printf("\n%d",stk[i]);
        printf("\n Press Next Choice");
}
 

int main()
{
	int cho;
	do
	{
		printf("\n *****main menu*****");
		printf("\n1.push\n2.pop\n3.peek\n4.display\n5.exit");
		printf("enter your choice :");
		scanf("%d",&cho);
		switch(cho)
		{
			case 1:push();break;
			case 2:pop();break;
			case 3:peek();break;
			case 4:display();break;
			case 5:exit(0);break;
			default:printf("enter the elements from 1 to 5");
		}
	}
	while (cho>0&&cho<=5);
}

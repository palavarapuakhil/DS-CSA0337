#include<stdio.h>
#include<stdlib.h>
#define size 5

int que[size],f=-1,r=-1;

void enque()
{
	int ele;
	printf("enter the element :\n");
	scanf("%d",&ele);
	if(r==size-1)
		printf("the queue is full");
	else
	{
		if(f==-1&&r==-1)
		{
		f=0;
		r=0;
        }
		else
			r=r+1;
	que[r]=ele;
	}
}

void deque()
{
	int ele;
	printf("enter the element :");
	scanf("%d",&ele);
	if(f==-1&&r==-1)
	printf("queue is empty");
	else
	{
		ele=que[f];
		if(f==r)
		{
			f=-1;
			r=-1;
		}
		else
		f=f+1;
	}
	printf("the default element is =%d",ele);
}

void display()
{
	int i;
    if(f==-1&&r==-1)
	printf("queue is empty");
	else
	{
	for(i=f;i<=r;i++)
	printf("%d",que[i]);
	}
}
int main()
{
	int cho;
	do
	{
		printf("\n *****main menu*****");
		printf("\n1.enque\n2.deque\n3.display\n4.exit\n");
		printf("enter your choice :");
		scanf("%d",&cho);
		switch(cho)
		{
			case 1:enque();break;
			case 2:deque();break;
			case 3:display();break;
			case 4:exit(0);break;
			default:printf("enter the elements from 1 to 5");
		}
	}
		while (cho>0&&cho<=5);

}

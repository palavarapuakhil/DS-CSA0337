#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*head=NULL,*p,*t,*newnode;

void create_sll()
{
	int i,n,ele;
	printf("enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the element:");
		scanf("%d",&ele);
		newnode=(struct node *)malloc(sizeof(struct node));
		newnode->data=ele;
		newnode->next=NULL;
	
		if(head==NULL)
		{
			head=newnode;
			p=head;
		}
		else
		{
		for(p=head;p->next!=NULL;p=p->next);
		
			p->next=newnode;
			p=newnode;
		}
	}

}

void display()
{
	if(head==NULL)
		printf("The SLL is empty");
	else
		for(p=head;p!=NULL;p=p->next)
			printf(" %d - > ",p->data);
}

void insert_end()
{int ele;
		printf("enter the element:");
		scanf("%d",&ele);
		newnode=(struct node *)malloc(sizeof(struct node));
		newnode->data=ele;
		newnode->next=NULL;
		for(p=head;p->next!=NULL;p=p->next);
		p->next=newnode;
		p=newnode;
}

void insert_begin()
{
    int ele;
		printf("enter the element:");
		scanf("%d",&ele);
		newnode=(struct node *)malloc(sizeof(struct node));
		newnode->data=ele;
		newnode->next=NULL;
		p=head;
		head=newnode;
        newnode->next=p;		
}

void insert_pos()
{
   int ele,po,i;
		printf("enter the element:");
		scanf("%d ",&ele);
		printf("enter the position");
		scanf("%d",&po);
		newnode=(struct node *)malloc(sizeof(struct node));
		newnode->data=ele;
		newnode->next=NULL;	
		for(i=0,p=head;i<po;i++,p=p->next);
		t=p;
		p=p->next;
		t->next=newnode;
		newnode->next=p;
}

void delete_end()
{int i=0;
	for(i=0,p=head;p->next!=NULL;i++,p=p->next)
	    t=p;
	t->next=NULL;
	printf("the element is deleted successfully");
}

void delete_begin()
{  
    p=head;
    t=p;
	p=p->next;
	head=p;
	free(t);
	printf("the element is deleted successfully");
}
void delete_pos()
{
	int po,i;
	printf("enter the position");
	scanf("%d",&po);
	for(p=head,i=1;i<po;i++,p=p->next)
	{
		t=p;
	}
	t->next=p->next;
	free(p);

	printf("the element is deleted successfully");	
}

int main()
{
	int ch;
	do{
	
    printf("\n1.CREATE_SSL\n2.DISPLAY\n3.INSERT AT END\n4.INSERT AT BEGINING\n5.INSERT AT ANY POSITION\n6.DELETE AT END\n7.DELETE AT BEGINING\n8.DELETE AT ANYPOSITION\n9.EXIT");
	printf("\nENTER YOUR CHOICE:");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			create_sll();
			break;
		case 2:
			display(); 
			break;
		case 3:
			 insert_end();
			 break;
		case 4:
			 insert_begin();
			 break;
		case 5:
			insert_pos();
			break;
		case 6:
		    delete_end();
		    break;
		case 7:
			delete_begin();
			break;
		case 8:
			delete_pos();
			break;
		case 9:
			 exit(1);
	}
	}while(ch>0 && ch<=9);
}

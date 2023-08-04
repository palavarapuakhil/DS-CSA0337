#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	struct node* left;
	int data;
	struct node* right;
}*root=NULL,*newnode;

struct node* insert(struct node*root,int ele)
{
	if(root==NULL){
		newnode=(struct node*)malloc(sizeof(struct node*));
		newnode->data=ele;
		newnode->left=NULL;
		newnode->right=NULL;
	}
	else if(ele<root->data){
		root->left=insert(root->left,ele);
	}
	else if(ele>root->data){
		root->right=insert(root->right,ele);
	}
}

void inorder(struct node*root)
{
	if (root!=NULL)
	{
		inorder(root->left);
		printf("%d ",root->data);
		inorder(root->right);
	}
}

void preorder(struct node*root)
{
	if (root!=NULL)
	{
		preorder(root->left);
		preorder(root->right);
		printf("%d ",root->data);
	}
}

void postorder(struct node*root)
{
	if (root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d ",root->data);
	}
}



int main(){
	int ch,ele;
	do{
		printf("\n1.INSERT ELEMENT INTO THE TREE\n2.INORDER TRAVERSAL\n3.PREORDER TRAVERSAL\n4.POSTORDER TRAVERSAL\n5.EXIT");
		printf("enter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("enter the element");
				scanf("%d",&ele);
				root=insert(root,ele);
				break;
			case 2:
				inorder(root);
				break;
			case 3:
				preorder(root);
				break;
			case 4:
				postorder(root);
				break;
			case 5:
				exit(1);
		}
	}while(ch>0&&ch<=5);
}

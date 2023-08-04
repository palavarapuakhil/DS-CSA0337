#include<stdio.h>
#include<ctype.h>
#include<string.h>

char stk[20];
int top=-1;


void push(char c)
{
	stk[++top]=c;
}


char pop()
{
	return(stk[top--]);	  	  
}



int priority(char c)
{
	if(c=='^'|| c=='&' || c=='|')
		return 3;
	else if (c=='/'|| c=='*' || c=='%')
		return 2;
	else if(c=='+' || c=='-')
		return 1;
	else
		return 0;
} 


main()
{
	char in[50],post[50],ch;
	int i,j,l;
	
	printf("Enter the string :");
	gets(in);
	
	l=strlen(in);
	j=0;
	
	for(i=0;i<l;i++)
	{   
		if(isalpha(in[i])) 
				post[j++]=in[i];
		else
		{
			if(in[i]=='(') 
					push(in[i]);	
			else if(in[i]==')')
					while((ch=pop())!='(') 
						post[j++]=ch;
			else
			{
				while(priority(in[i])<=priority(stk[top])) 
					post[j++]=pop(); 
				push(in[i]);
			}
		}
	}
		whil�
[1:34 pm, 10/01/2023] T. Rajesh Kumar: #include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>

int stk[20];
int top =-1;


void push(int val)
{
	stk[++top] = val;
}

int pop()
{
	return(stk[top--]);
}



main()
{
	int op1,op2,len,result,i;
	char postfix[30],op;
	
    printf("\nEnter the postfix expresstion");
	gets(postfix); 
	
	len=strlen(postfix);
	
	for(i=0 ;i<len ; i++)
	{
		if( isdigit(postfix[i]))
	   	      	  	  push(postfix[i]-'0');
		else
		{
			op=postfix[i];
			op2=pop();
			op1=pop();
			
			switch(op)
			{
				case '+': push(op1+op2);
						  break;
				case '-': push(op1-op2);
						  break;
				case '*': push(op1*op2);
						  break;
				case '/': push(op1/op2);
						  break;
				case '%': push(op1%op2);
						  break;
			}
			
		}	 	 
	}
	
	result=pop();	 
	printf("The evaluated value is = %d",result);	 
	
}

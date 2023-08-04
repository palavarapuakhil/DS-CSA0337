#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,j,flag;
		char name[100];
		scanf("%s",name);
		//gets(name);
		n=strlen(name);
		flag=1;
		for(i=0,j=n-1;i<=(n-1)/2;i++,j--)
		{
			if (name[i]!=name[j])
			{
				flag=0;
				break;
			}
		}
		if (flag==1)
			printf("yes");
		
		else 
			printf("no");
			
	}
}

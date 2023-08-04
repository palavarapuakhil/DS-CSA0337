#include<stdio.h>
int main()
{
	int i,n,h[20],flg,ind,key,x=0;
	
	printf("enter the size of the hash table:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		h[i]=-1;
	}
	for(i=0;i<n;i++){
		x=0,flg=0,ind=0;
		printf("enter the key value:");
		scanf("%d",&key);
		do{
			ind=((key%n)+x)%n;
			if(h[ind]==-1)
			{
			  h[ind]=key;
			  flg=1;	
			}
			else
				x++;
		}while(flg==0);
			}
			
    for(i=0;i<n;i++){
    	printf("\n%d -> %d",i,h[i]);
	}
return 0;
		}

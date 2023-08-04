#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j,temp;
	printf("enter the no of elements in the array:");
	scanf("%d",&n);
	int a[n];
	printf("enter the element of the array");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);}
	for(i=0;i<n;i++){
		j=i;
		while(j>0&&a[j]<a[j-1]){
			temp=a[j];
			a[j]=a[j-1];
			a[j-1]=temp;
			j--;
		}
	}
	printf("the matrix elements are:");
	for(i=0;i<n;i++){
		printf(" %d ",a[i]);}
	
}

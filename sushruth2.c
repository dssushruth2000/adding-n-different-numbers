#include<stdio.h>
int inputarray(int n)
{	printf("Enter the number of elements");
	scanf("%d",&n);
	return n;
}

int inputarray1(int a[],int n)
{	
	int i;
	printf("\n Enter the array elements \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}

int sumarray(int a[],int n)
{
	int i,s=0;
	for(i=0;i<n;i++)
	{
		s=s+a[i];
	}
	return s;
}

int outputarray(int s)
{
	printf("SUM = %d",s);
}

int main()
{	int n,s;
	n=inputarray(n);
	int a[n];
	inputarray1(a,n);
	s=sumarray(a,n);
	outputarray(s);
}
	

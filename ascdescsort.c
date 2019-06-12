#include<stdio.h>
void swap(int *p,int *q)
{
	int temp=*p;
	*p=*q;
	*q=temp;
}
void ascsort(int a[],int n)
{
	int i,j;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		 if(a[j]>a[j+1])
		  swap(&a[j],&a[j+1]);
	}
}
void descsort(int a[],int s,int n)
{
	int i,j;
	for(i=1;i<n;i++)
	{
		for(j=s;j<n-i;j++)
		 if(a[j]<a[j+1])
		  swap(&a[j],&a[j+1]);
	}
}
void main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	int m;
	scanf("%d",&m);
	for(i=0;i<n;i++)
	 printf("%d ",a[i]);
	printf("\n");
	ascsort(a,m);
	descsort(a,m,n);
	for(i=0;i<n;i++)
	 printf("%d ",a[i]);
}

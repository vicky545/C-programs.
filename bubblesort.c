#include<stdio.h>
void swap(int *p,int *q)
{
	int temp=*p;
	*p=*q;
	*q=temp;
}
void sort(int a[],int n)
{
	int i,j;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		 if(a[j]>a[j+1])
		  swap(&a[j],&a[j+1]);
	}
}
void main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	sort(a,n);
	for(int i=0;i<n;i++)
	 printf("%d",a[i]);
}

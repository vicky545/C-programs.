#include<stdio.h>
int search(int a[],int n,int key)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==key)
		 return i;
	}
	return -1;
}
void main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	 scanf("%d",&a[i]);
	int key;
	scanf("%d",&key);
	int index;
	if((index=search(a,n,key))==-1)
	 printf("not found");
	else
	 printf("found at index %d",index);
}

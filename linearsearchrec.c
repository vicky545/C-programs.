#include<stdio.h>
int search(int a[],int n,int key,int s)
{
	if(s>=n)
	{
		return -1
	}
	else{
		if(a[s]==key)
		 return s;
		 else
		 return search(a,n,key,s+1);
	}
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
	if((index=search(a,n,key,0))==-1)
	 printf("not found");
	else
	 printf("found at index %d",index);
}

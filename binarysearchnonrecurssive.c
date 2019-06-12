#include<stdio.h>
int nonrecsearch(int a[],int key,int n)
{
	int mid,l=0,h=n-1;;
  while(l<=h)
  {
  	mid=(l+h)/2;
  	if(a[mid]==key)
  	 return mid;
  	else if(a[mid]<key)
  	 l=mid+1;
  	else
  	 h=mid-1;
  }
  return -1;
}
void sort(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
		if(a[j+1]<a[j])
		{
		int t=a[j];
		a[j]=a[j+1];
		a[j+1]=t;
	   }
	  }
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
	sort(a,n);
	if((index=nonrecsearch(a,key,n))==-1)
	 printf("not found");
	else
	 printf("found at index %d",index);
}


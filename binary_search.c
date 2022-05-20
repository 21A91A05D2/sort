#include<stdio.h>
int binary_search(int *arr,int n,int se)
{
	int m=0,i=0,j;
	j=n-1;
	while(i<=j)
	{
	m=(i+j)/2;
	if(arr[m]==se)
	{
		return 1;
	}
	if(arr[m]>se)
	{
		j=m-1;	
	}
	if(arr[m]<se)
	{
		i=m+1;	
	}
	return -1;
	}
}
int main()
{
	int arr[40],i,j,se,m,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&se);
	if(binary_search(arr,n,se))
	printf("found");
	else
	printf("not found");
}

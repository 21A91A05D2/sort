//Recursive Approch For Linear Search
#include<stdio.h>
int linear_search(int *arr,int se,int n)
{
	int static i=0;
	if(i==n)//we have to write this condition first
	{
		return 0;
	}
	if(arr[i]==se)
	{
		return 1;
	}
	i++;
	return linear_search(arr,n,se);
}
int main()
{
	int n,arr[20],i,se;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&se);
	if(linear_search(arr,n,se))
	{
		printf("found");
	}
	else
	printf("Not Found");
}

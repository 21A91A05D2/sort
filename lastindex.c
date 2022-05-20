#include<stdio.h>
int linear_search(int *arr,int n,int se)
{
	int i,k=-1;
		for(i=0;i<n;i++)//for(i=n-1;i>=0;i--)another method from back side 
	{
		if(arr[i]==se)
		{
			k=i;//return i;	
		}		
	}
	return k;
}
int main()
{
	int arr[20],n,i,se;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);	
	}
	scanf("%d",&se);
	printf("%d",linear_search(arr,n,se));
}
/*
4
4 4 5 5
5
3
*/
		

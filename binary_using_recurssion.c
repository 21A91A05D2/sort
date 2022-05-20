#include<stdio.h>
int binary_search(int *arr,int i,int j,int se)
{
	int m;
	if(i>j)
	{
		return 0;
	}
	m=(i+j)/2;
	if(arr[m]==se)
	{
		return 1;
	}
	if(arr[m]>se)
	{
		j=m-1;	
	}
	else
	{
		i=m+1;
		//return binary_search(arr,i,j,se);
	}
	binary_search(arr,i,j,se);	
}
int main()
{
	int arr[40],i=0,j,l,se,m,n;
	j=n-1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&se);
	l=0;
	j=n-1;
	if(binary_search(arr,l,j,se))//if(return binary_search(arr,0,n-1,se);otherway
	printf("found");
	else
	printf("not found");

}

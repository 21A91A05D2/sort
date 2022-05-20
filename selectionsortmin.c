#include<stdio.h>
void selection_sort(int *arr,int n)
{
	int i,mini,temp;
	for(i=0;i<n;i++)
	{
		mini=min(arr,i,n);//find min value index
		temp=arr[i];
		arr[i]=arr[mini];
		arr[mini]=temp;
	}
}
int min(int *arr,int i,int n)
{
	int j,ind=i,mini=arr[i];
	for(j=i;j<n;j++)
	{
	
			if(mini>(arr[j]))
			{
				mini=arr[j];
				ind=j;
				
			}
		
	}
	return ind;
}

int main()
{
	int n,arr[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	selection_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
		
	}
}
/*
4
2 5 4 1
1 2 4 5*/

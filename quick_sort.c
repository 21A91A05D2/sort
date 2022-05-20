#include<stdio.h>
int partition(int *arr,int l,int n)
{
	int temp,i,j,p;
	p=n-1;
	for(i=l,j=l;j<p;j++)
	{
		if(arr[j]<arr[p])
		{
		
			temp=arr[j];
			arr[j]=arr[i];
			arr[i]=temp;
			i++;
		}
	}
	temp=arr[i];
	arr[i]=arr[p];
	arr[p]=temp;//22 33 21 11 9 55 77 66 88
	/*step 1 p value comes to i place below the p value all values are minimum*/
	return i+1;
	
}
void quick_sort(int *arr,int l,int n)
{
	//	partition(arr,l,p);
	int p;
	if(l<n)
	
	{
		p=partition(arr,l,n);
		quick_sort(arr,l,p-1);
		quick_sort(arr,p+1,l);
	}
}
	void main()
{
	int arr[100],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);//22 66 33 77 21 88 11 9 55
	}
	quick_sort(arr,0,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}


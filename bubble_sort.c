// 3 programs about bubble first one is best as it reduces time
#include<stdio.h>
void bubble_sort(int *arr,int n)
{
	int i,j,p,temp=0,swapcount=0;
	for(p=0;p<=n;p++)
	{
		swapcount=0;
		for(i=0,j=1;j<n-p;i++,j++)
	    {
			if(arr[i]>arr[j])
			{
				swapcount++;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
	    }
	if(swapcount==0)
	{
		break;
	}
	}
}
int main()
{
	int i,n,arr[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	bubble_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}

/*
#include<stdio.h>
void bubble_sort(int *arr,int n)
{
	int i,j,temp=0;
		for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
			
		}
	}
	
}
int main()
{
	int i,n,arr[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	bubble_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}*/





/*
#include<stdio.h>
void bubble_sort(int *arr,int n)
{
	int i,j,p,temp=0;
	for(p=0;p<=n;p++)
	{
		for(i=0,j=1;j<n;i++,j++)
	{
		//for(j=i+1;j<n;j++)
		//{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
			
		//}
	}
	}
}
int main()
{
	int i,n,arr[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	bubble_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}*/

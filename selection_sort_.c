#include<stdio.h>
int max(int *a,int n)
{
	int i,maxnum=a[0],maxindex=0;
	for(i=1;i<n;i++)
	{
		if(a[i]>maxnum)
		{
			maxnum=a[i];
		}
		maxindex=i;
	}
	printf("%d %d",maxnum,maxindex);
}
void selction_sort(int *a,int n)
{
	int i,temp;
	max(a,n);
}
int main()
{
	int n,i,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	selection_sort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

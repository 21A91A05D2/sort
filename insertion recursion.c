#include<stdio.h>
int i=0;
void insertion_sort(int *a,int n)
{
	int j,temp;
	temp=a[i];
	j=i-1;
	if(j==-1)
	{
		a[0]=temp;
		i++;
	}
	if(temp<a[j])
	{
		a[j+1]=a[j];
		j--;
		insertion_sort(a,n);
	}
	else
	{
		a[j+1]=temp;
		i++;
	}
}
int main()
{
	int n,i,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	insertion_sort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

#include<stdio.h>
void merge(int *arr,int l,int h,int m)
{
	int i=l,j=m+1,k=0,res[h-l+1];
	while(i<=m && j<=h)
	{
		if(arr[i]>arr[j])
		{
			res[k++]=arr[j++];
		}
		else
		{
			res[k++]=arr[i++];
		}
	}
	while(i<=m)
	{
		res[k++]=arr[i++];
	}
	while(j<=h)
	{
		res[k++]=arr[j++];
	}
	k=0;
	for(i=l;i<=h;i++)
	{
		arr[i]=res[k++];
	}
}
void merge_sort(int *arr,int l,int h)
{
	if(l<h)
	{
	int m;
	m=(l+h)/2;
	merge_sort(arr,l,m);
	merge_sort(arr,m+1,h);
	merge(arr,l,h,m);
    }
}
int main()
{
	int arr[100],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	merge_sort(arr,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}

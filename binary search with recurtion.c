#include<stdio.h>
int binary_search_rec(int *arr,int l,int h,int se)
{
	if(l>h)
	{
		return -1;
	}
	int m;
	m=(l+h)/2;
	if(arr[m]==se)
	{
		return m;
	}
	else if(arr[m]>se)
	{
		h=m-1;
	}
	else if(arr[m]<se)
	{
		l=m+1;
	}
}
int main()
{
	int n,arr[100],i,se,res;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&se);
    res=binary_search_rec(arr,0,n-1,se); 
    printf("%d",res);
}

#include<stdio.h>
int binary_search(int *arr,int n,int se)
{
	int l,h,m;
	l=0;
	h=n-1;
	while(l<=h)
	{
		m=(l+h)/2;
		if(arr[m]==se)
		{
			return m;
		}
		else if(arr[m]<se)
		{
			l=m+1;
		}
		else if(arr[m]>se)
		{
			h=m-1;  
		}
	}
	return -1;
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
    res=binary_search(arr,n,se); 
    printf("%d",res);
}

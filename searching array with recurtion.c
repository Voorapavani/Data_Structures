#include<stdio.h>
int linearsearch_rec(int *arr,int n,int i,int se)
{
	if(i==n)
	{
		return -1;
	}
	if(arr[i]==se)
	{
		return i;   
	}
	linearsearch_rec(arr,n,i+1,se);
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
    res=linearsearch_rec(arr,n,0,se); 
    printf("%d",res);
}

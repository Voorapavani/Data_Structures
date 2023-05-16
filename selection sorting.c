#include<stdio.h>
void selection(int *arr,int n)
{
	int i,p,max,maxind,temp;
	for(p=0;p<n-1;p++)
	{    
	max=arr[0];
	maxind=0;
		for(i=0;i<n-p;i++)
		{
			if(arr[i]>max)
			{
				max=arr[i];
				maxind=i;
			}
		}  
	    temp=arr[maxind];
	    arr[maxind]=arr[i-1];
    	arr[i-1]=temp; 
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	selection(arr,n);
	for(i=0;i<n;i++)
	{
		printf(" %d",arr[i]);
	}
	
}


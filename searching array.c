 #include<stdio.h>
int linearsearch(int *arr,int s,int se)
{
	int i;
	for(i=0;i<s;i++)
	{
		if(arr[i]==se)
		{
			return i;
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
    res=linearsearch(arr,n,se);
    printf("%d",res);
}

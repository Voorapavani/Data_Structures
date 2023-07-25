#include<stdio.h>
int get_max(int *a,int n)
{
	int i,max=0;
	for(i=0;i<n;i++)
	{
		if(max<a[i])max=a[i];
	}
	return max;
}
void radixsort(int a[],int n)
{
	int i,p=1;
	int max=get_max(a,n);
	while(max!=0){
		int b[10][n];	    
	    int cnt[10]={0};
		for(i=0;i<n;i++)
		{
			int d=(a[i]/p)%10;
			b[d][cnt[d]]=a[i];
			cnt[d]+=1;
		}
		int x=0,j;
		for(i=0;i<10;i++)
		{
			for(j=0;j<cnt[i];j++)
			{
				a[x]=b[i][j];
				x++;
			}
		}
		max/=10;
		p*=10;
	}
}
int main(){
	int n,i,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++) 
	{
		scanf("%d",&a[i]);
	}
	radixsort(a,n);
	for(i=0;i<n;i++) 
	{
		printf("%d ",a[i]);
	}
}

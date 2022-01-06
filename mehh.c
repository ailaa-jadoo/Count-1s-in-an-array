#include<stdio.h>

int main()
{
	int i,n,max=0,count=0;
	int a[400010];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		a[i+n]=a[i];
	}
	for(i=0;i<2*n;i++)
	{
		if(a[i]==1)
			count++;
		else
		{
			if(max<=count)
				max=count;
			count=0;
		}
	}
	if(max<=count)
		max=count;
	printf("%d",max);
	return 0;
}

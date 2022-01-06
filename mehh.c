// B. Maximal Continuous Rest
// codeforces question
// in this question we have given an array consisiting of 1s ond 0s where 1 represnt rest .So, question says like we have to calculate max consecutive time for rest (i.e. max number of consequtive 1's in the array now the catch is that the the other day is also taken in consideration means if there is array like 1 0 1 0 1 ,then last 1 and first 1 will combine to give max consequtive 1's as 2)

#include<stdio.h>

int main()
{
	int i,n,max=0,count=0;
	int a[400010];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		a[i+n]=a[i]; //here i am actually concatining the same array means 1 0 1 0 1 -------> 1 0 1 0 1 . 1 0 1 0 1  like this so that the other day can be considered
	}
	for(i=0;i<2*n;i++) //this loop is used to find max consequtive number of 1's in the array
	{
		if(a[i]==1)
			count++;
		else //when a[i] is not 1 we are checking wheter the counted consequtive 1s is greater then max or not
		{
			if(max<=count)
				max=count;
			count=0; //puting count again 0 as it is less then the current max consecutive 1s
		}
	}
	if(max<=count)
		max=count;
	printf("%d",max); //printing the answer
	return 0;
}

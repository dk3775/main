#include<stdio.h>
int sum(int nn)
{
    int ld,s=0;
	while(nn!=0)
	{
		ld = nn % 10;
		s=s+ld;
		nn /= 10;
	}
	return(s);
}
int main()
{
	int n,ss;
	printf("Enter N \n");
	scanf("%d",&n);
	do
	{
	    n=sum(n);
	    ss=sum(n);
	}while(ss>10);
	printf("%d",ss);
}

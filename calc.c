#include<stdio.h>
#include<math.h>
int main ()
{
	int cp,f,cmp;
	float p;
	printf("Enter cost : \n");
	scanf("%d", &cp);
	cmp=cp*5;
	printf("Compare price = %d \n",cmp);
	if(cp<501)
	p=cp*3;
	else if(cp>=501 && cp<=800)
	p=cp * 2.7;
	else if(cp>=801 && cp<=1200)
	p=cp * 2.5;
	else if(cp>=1201 && cp<=2000)
	p=cp * 2.3;
	else
	p=cp * 2.2;
	f= ceil(p);
	printf("Price = %d ",f);
}

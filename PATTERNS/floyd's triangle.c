#include<stdio.h>
int main(void)
{
	int r,i,j,n=1;
	scanf("%d\n",&r);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=i;j++)
		{ 
		    printf("%d ",n); 
		    n++;
                          }
                printf("\n");
	}
	return 0;
}

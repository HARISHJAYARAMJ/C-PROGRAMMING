#include<stdio.h>
#include<string.h>
int main(void)
  {
  	char a[100];
  	int i,b,count=0;
  	gets(a);
  	b=strlen(a);
            for(i=0;i<=b;i++)
  	{
  		if(a[i]=='.')
  		{
  		count++;
  		}
  	}
  		
  	    
  	printf("%d",count);
  	 
    return 0;
  }

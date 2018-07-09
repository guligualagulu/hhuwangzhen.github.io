#include<stdio.h>
int main()
{
	int k,i,c=0;
	int a[123]={0};
	char b[50];
	gets(b);
		for(k=0;k<50;k++)
		{
			i=b[k]-1;
		a[i]++;
		}
		for(k=0;k<50;k++)
		{   i=b[k]-1;
			if(a[i]==1)
			{
				c=1;
	          printf("%d\n",k);
		       break;
			}
		}
			if(c==0)
				printf("-1\n");
			return 0;
}
	

				






#include <stdio.h>
void main()
{
	int t,i;
	printf("Enter size of box: ");
	scanf("%d",&t);
	for(int j=0;j<(t/3);j++)
		{
			for(i=0;i<t;i++)
			{
				if(i==0 || i==t-1 || j==0 || j==((t/3)-1))
				{
					printf("%c",219);
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
}
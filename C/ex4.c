#include <stdio.h>
main()
{
	int num[5][3];
	int i=1,r,c;
	int total;
	
	for(r=0; r<5; r++)
	{
			for(c=0; c<3; c++)
			{
				printf("Input num[%d][%d]",r,c);
				scanf("%d",&num[r][c]);
			}
	}
		printf("No\t Score\t Mid\t Final\t Total\n");
	for(r=0; r<5; r++)
	{
		total=0;
		printf("%d",i);
			for(c=0; c<3; c++)
			{
				printf("\t%d",num[r][c]);
				total=total+num[r][c];
			}
		printf("\t%d",total);
		printf("\n");
		i++;
	}
			
}

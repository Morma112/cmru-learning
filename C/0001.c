#include <stdio.h>
main()
{
    float grade[6],GPA = 0,j;
    char name[20];
    int i;
    puts("Enter your name: ");
    gets(name);
    printf("Enter your grede:\n");
    for(i=0; i<6; i++)
    {
    	printf("Subject: %d",i+1);
		scanf("%f",&grade[i]);
		GPA += grade[i];
	}
	j = GPA / 6;
	printf("your grade: %.2f\n",j);
}

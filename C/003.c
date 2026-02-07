#include<stdio.h>
#include<windows.h>
showmenu()
{
	printf("---------------------\n");
	printf("   1.Push Stack\n");
	printf("   2.Pop Stack\n");
	printf("   3.Display\n");
	printf("   0.Exit\n");
	printf("---------------------\n");
	printf("Enter Choice");
}
main()
{
	int ch=9,stack[5],top=-1,info,temp,i;
	while(ch != 0)
	{
		system("cls");
		showmenu();
		scanf("%d",&ch);
		if(ch == 1)
			{
				printf("Input Data = ");
				scanf("%d",&info);
			if(top <4)
				{
					top = top+1;
					stack[top] = info;
				}
			else
				printf("Stack Full");
				getch();
			}
		else if(ch == 2)
			{
			if(top == -1)
				{	
				printf("Stack Empty");
				}
			else
					temp = stack[top];
					top = top-1;
				getch();	
			}
		else if(ch == 3)
			{
				i = top;
				while (i != -1)
				{
					printf("%d\n",stack[i]);
					i=i-1;
				}
				getch();
				}
	}
}

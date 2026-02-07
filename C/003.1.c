#include<stdio.h>
#include<windows.h>
#include<conio.h>
typedef struct node
{
	int data;
	struct node *next;
} node;
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
	int ch=9,info;
	node *top, *p;
	top = NULL;
	while(ch != 0)
	{
		system("cls");
		showmenu();
		scanf("%d",&ch);
		if(ch == 1)
			{
				if(top == NULL)
				
			}
		else if(ch == 2)
			{
				
			}
		else if(ch == 3)
			{
			
			}
	}
}

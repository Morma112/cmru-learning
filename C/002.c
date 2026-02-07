#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node
{
	char name[15];
	struct node *next,*prev;
}node;
node *head,*tail,*p;

//create funtion
showmenu()
{
	printf("************\n");
	printf("   Menu\n");
	printf("************\n");
	printf("  1.Create\n");
	printf("  2.Add Data\n");
	printf("  3.Display\n");
	printf("************\n");
	printf("Please Enter [1-3]\n");
}
create()
{
	head = NULL;
	tail = NULL;
	p=(struct node *)malloc(sizeof(struct node));
	strcpy(p->name,"A");
	p->prev = NULL;
	p->next = NULL;
	head = p;
	tail = p;
	
}
add()
{
	p= (struct node *)malloc(sizeof(struct node));
	strcpy(p->name,"B");
	p->next = head;
	p->prev = NULL;
	head->next = NULL;
	head->prev = p;
	head = p;	
}
display()
{
	p = head;
	while(p!= NULL)
	{
		printf("%s\n",p->name);
		p = p->next;
	}
}

//run it
main()
{
	int ch;
	showmenu();
	scanf("%d",&ch);
	while(ch != 0)
	{
	if (ch==1)
		create();
	else
		 if (ch==2)
	 		add();
		else
			 if (ch==3)
			 	display();
		showmenu();
		scanf("%d",&ch);
	}
}

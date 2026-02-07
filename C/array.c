#include<stdio.h>
#include<windows.h>
#include<conio.h>
showmenu()
{
	printf("---------------------\n");
	printf("   1.EnQueue\n");
	printf("   2.OutQueue\n");
	printf("   3.Display\n");
	printf("   0.Exit\n");
	printf("---------------------\n");
	printf("Enter Choice");
}
main()
{
	int ch=9, q[5], F=-1, R=-1;
	int info,temp,i;
	while(ch != 0)
	{
		system("cls");
		showmenu();
		scanf("%d",&ch);
		if(ch == 1)	
		{
			printf("Input data = ");
			scanf("%d",&info);
			if(R == 4){
				printf("Queue Overflow");
			} else if(F == -1){
					R = R+1;
					q[R] = info;
					F = F+1;
				} else {
					R = R+1;
					q[R] = info;
				}
		}
		else 
		if (ch == 2)
			{
				if (F==-1){
					printf("Queue Underflow");
				} else {
					if(F==R){
						temp=q[F];
						F = R = -1;
					} else {
						temp = q[F];
						F = F+1;
					}
				}
			}
		else 
		if(ch == 3)
		{
			i= F;
			while(i<=R){
					printf("%d\n",q[i]);
					i=i+1;
			}
			getch();
		}
	}
}

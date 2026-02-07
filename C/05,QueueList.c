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
	printf("   1.EnQueue\n");
	printf("   2.OutQueue\n");
	printf("   3.Display\n");
	printf("   0.Exit\n");
	printf("---------------------\n");
	printf("Enter Choice");
}

main() 
{
	int count = 0; 
	int ch=9,info; 
	node *F,*R, *p, *temp, *i; 
	F = R = NULL; 
	while(ch != 0) { 
  		system("cls"); 
  		showmenu(); 
  		scanf("%d",&ch); 
  		if(ch == 1) { 
   			printf("Input Data : \n"); 
   			scanf("%d",&info); 
   			if(count == 4) 
   			printf("Q Overflow"); 
   			else {
    			if(F == NULL) { 
                  p = (node*)malloc(sizeof(node)); 
                  p->data=info; 
                  p->next=NULL; 
                  F=p; 
                  R=p; 
    			} 
    			else { 
    				p=(node*)malloc(sizeof(node)); 
    				p->data=info; 
    				p->next=NULL;  
    				R->next=p; 
    				R=p; 
    			} 
   				count++;  
   			} 
  		} 
  		else if(ch ==2) { 
   				if(F == NULL) 
   				printf("Q Undarflow"); 
   				else 
   				if(F == R) { 
    				temp=F->data;
    				F=R=NULL;getch();
   					} else{
   						int temp = F->data;

                        p = F;
                        F = F->next;
                        free(p);

                        if (F == NULL)
                        R = NULL;
					   }
  				} 
  				else if(ch==3) { 
    					p = F; 
     					while(p != NULL) { 
      						printf("%d\n",p->data); 
      						p=p->next; 
     					} 
  					} 
  					getch();  
 		} 
}

#include<stdio.h> 
#include<windows.h> 
showmenu() 
{ 
 printf("-----------------\n"); 
 printf("1. EnQuere\n"); 
 printf("2. OutQuere\n"); 
 printf("3. Display Quere\n"); 
 printf("0. Exit\n"); 
 printf("----------------\n"); 
 printf("Enter chice\n"); 
} 
main() 
{ 
 	int q[5],ch=9,F=-1,R=-1; 
	 int info,team,i; 
 	while(ch != 0) 
 	{ 
  		system("cls"); 
  		showmenu(); 
  		scanf("%d",&ch); 
  		if(ch== 1) { 
  			 printf("Input data = "); 
  		 	scanf("%d",&info); 
   			if(R == 4) 
   			printf("Q Overflow"); 
   			else { 
   				 if(F == -1){ 
    				R = R+1; 
     				q[R] = info; 
     				F =F+1; 
    			} 
    			else { 
    				R = R+1; 
     				q[R] = info; 
      
    			} 
   			} 
  		} 
  		else 
  		if(ch == 2) { 
   			if(F == -1) 
  			 printf("Q Undarflow"); 
   			else 
   			if(F == R){ 
    			team =q[F]; 
    			F =R =-1; 
    			printf("TEaM = %d\n",team); 
  			} 
   			else { 
    			team =q[F]; 
   				F =F+1; 
    			printf("TEaM = %d\n",team); 
			} 
		} 
     	else 
     	if(ch == 3){ 
   			i = F; 
     		while(i != 5){ 
      		printf("%d\n",q[i]); 
      		i=i+1; 
    		} 
  		} 
  		getch(); 
 	} 
} 

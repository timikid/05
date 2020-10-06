#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
   
   int answer = 59;
   int i;
   int t;
   
   do
   {
   
    	printf("guess a number : ");
   	    scanf("%i", &i);
   	   
	    if(i< answer)
	      printf("low!\n");
	    else if(i> answer)
	      printf("high!\n");
        
		t++;
   	
    } while(i != answer);
	
	 
    printf("congratulation! trials :%i ", t); 
    
   	    
	return 0;
 }

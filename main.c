#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
   
    int x; 
   
    printf("������ �ϳ��� �Է��Ͻÿ�  : ");
    scanf("%i", &x );
   
    if ( x < 0 ) 
       x = x*(-1);
       
       
    printf("���밪�� %i �Դϴ�. \n", x);
   
           
	
	return 0;
}

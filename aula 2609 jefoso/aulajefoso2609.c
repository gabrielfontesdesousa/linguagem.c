#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int numero1;
	int numero2;
	int total; 
	
	printf("digite um numero\n");
    scanf("%d",&numero1);
    
    printf("digite outro numero\n");
    scanf("%d",&numero2);
     
	total = numero1+numero2;

	if(total>=10){
		printf("a soma e maior que 10");
	}
	if(total<=1 && total==5){
		printf("a soma e menor que 10");
	}
	
	

			
			
		
		
	
	return 0;
	
	}

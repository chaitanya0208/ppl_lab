#include<stdio.h>

int main()
{
	int i=2, j;
	while(i <= 100) {
		j = 2;
		if (j < i){
			if(i % j == 0){
				if(i == j){
					printf("i = %d", i);
					i = i + 1;
				}
				else
					i = i + 1;
			}
			else
				j = j +1;
		}
		else
			if (i == j){
				printf("i = %d",i);
				i = i + 1;
			}
			else		
				i = i + 1;
		}
		
		return 0;			
}							
			
		
	

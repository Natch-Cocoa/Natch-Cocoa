//ทำโดย นาย ณภัทร ทองเปลว 011
#include "stdio.h"
main(){
	
	
int loop,sum;

printf("Enter a value: ");
scanf("%d",&loop);
printf("\nNumber : %d",loop);

sum = 1;

for(int i = 1; i <= loop; i++){
	sum *= i;
	
}
printf("\nFactorial : %d",sum);
}
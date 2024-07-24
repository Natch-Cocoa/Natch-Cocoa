//เขียนโดย นายณภัทร ทองเปลว 011
#include"stdio.h"
main() {
	int x[4][4]= {45,65,78,54,
	              15,28,94,35,
	              65,74,24,85,
	              18,98,76,22
	             };
	int i,j;

	for(i=0; i<4; i++) {
		for(j=0; j<4; j++) {
			printf(" %d ",x[i][j]);

		
		}
	
		printf("\n");
	}
int rows_sum[4] = {0};
int columns_sum[4] = {0};

for (int i= 0; i < 4; i++) {
	for (int j = 0; j < 4; j++){
		rows_sum[i] += x[i][j];
		columns_sum[j] += x[i][j];
		
	}
	
	
}
printf("Sum of the rows: ");
for (int i = 0; i < 4; i++){
	printf("%d ",rows_sum[i]);
	
}
printf("\n");

printf("Sum of the columns: ");
for (int i = 0; i < 4; i++){
	printf("%d ",columns_sum[i]);
	
}
printf("\n");


}
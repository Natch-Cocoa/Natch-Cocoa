//ทำโดย นาย ณภัทร ทองเปลว 011
#include "stdio.h"
main() {
	int i,sum;


	for (i=1; i<=100; i++) {
		if (i%2 == 1) {
			printf(" %d\n",i);
			sum += i;
		}

	}
	printf ("\nsum of odd numbers : %d\n",sum);



}


#include <stdio.h>
int main() {

	int i = 0;
	
        while (i < 4) {
		int j = 0;
        	while (j < 4) {
			if (i == j) {
				printf("1 ");
                	}
			else{
				printf("0 ");
			}
			j += 1;
		}
		printf("\n");
		i += 1;
		
        }

        return 0;

}

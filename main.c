#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {

	int num , space, num2 = 4;
		
		while (num < 9) {
			if (num < 5) {
				space = 0;
				while (space <= num) {
					printf("*");
					space++;
				}
		    }
			else {
				space = 0;
				while (space < num2) {
					printf("*");
					space++;
				}
				num2--;	
			}
			printf("\n");
			num++;
		}
		
		
		return 0;
}

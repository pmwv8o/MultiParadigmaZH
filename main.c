#include <stdio.h>
#include <stdlib.h>

int main() {
	int year;
	printf("*************SZOKOEV KALKULATOR*************");
	
	do {
	printf("\nKerek egy evet,\n(Csak 1581 utani szamok elfogadhatok): ");
	scanf("%d", &year);
	} while (year <= 1581);
	if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
			printf("A(z) %d szokoev", year);
		else
			printf("A(z) %d nem szokoev.", year);
	
   return 0;
}

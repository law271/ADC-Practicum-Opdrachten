#include <stdio.h>

int main (void) 
{
	int x, y; 
	int result = 1;
   
	printf("Voer een nummer in: ");
	
	while (!scanf("%d", &x)) {
		printf("Error! Foutieve invoer.\n");
		while(getchar() != '\n')
            ; 
        printf("Voer een nummer in: ");
	}
	
	   
   printf("Voer een nummer in: ");
   
   while (!scanf("%d", &y)) {
		printf("Error! Foutieve invoer.\n");
		while(getchar() != '\n')
            ; 
        printf("Voer een nummer in: ");
	}
	
   
   int z;

   z = x + y;

	printf("%d + %d = %d\n", x, y, z);
   
   
   return 0;
}

// Done
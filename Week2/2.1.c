#include <stdio.h>

#define ARRAY_SIZE 10

int main(void)
{
	int a[] = { 0, 0, 0, 1, 0, 1, 1, 1, 1, 1 };
	//int a[ARRAY_SIZE];
	
	int o = 0;
	int z = 0;
	
	printf("a: ");
    for(int i = 0; i < 10; i++) {
		if (a[i] == 0) {
			z++;
		}
		else if (a[i] == 1) {
			o++;
		}
        printf("%d ", a[i]);
    }
    putchar('\n');
	
	if (z == o) {
		printf("Enen zijn gelijk aan nullen\n");
	}
	
	else if (z != o) {
		printf("Aantal enen: %d\n", o);
		printf("Aantal nullen: %d\n", z);
	}
	

}

// Schrijf een programma dat een int array 
// met lengte 10 vult met nullen en enen. 
// De nullen en enen worden ingelezen. Ga na of
// het aantal enen gelijk is aan het aantal nullen
// en druk het resultaat af.

// Leerdoelen:
// - Oefenen met het inlezen van gegevens voor een int-array 
// - Oefenen met het doorlopen van een array 

// Done?
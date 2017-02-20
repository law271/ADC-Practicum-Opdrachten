#include <stdio.h>
#include <string.h>

typedef struct voorwerp {
	 int nummer;
	 char naam[20];
	 double gewicht, lengte;
 } VOORWERP;

int main(void)
{
	VOORWERP voorwerp;
	
	printf("nummer: ");
    while (!scanf("%d", &voorwerp.nummer)) {
		printf("Error! Foutieve invoer.\n");
		while(getchar() != '\n')
            ; 
        printf("nummer: ");
	}
	
	printf("naam: ");
	scanf("%s", &voorwerp.naam);
	
	printf("gewicht: ");
	while (!scanf("%lf", &voorwerp.gewicht)) {
		printf("Error! Foutieve invoer.\n");
		while(getchar() != '\n')
            ; 
        printf("gewicht: ");
	}
	
	printf("lengte: ");
	while (!scanf("%lf", &voorwerp.lengte)) {
		printf("Error! Foutieve invoer.\n");
		while(getchar() != '\n')
            ; 
        printf("lengte: ");
	}
    
    printf("%s heeft nummer %d, weegt %lf kg en is %lf cm\n", voorwerp.naam, voorwerp.nummer, voorwerp.gewicht, voorwerp.lengte);

	
}

// Gegeven is de struct-definitie:

 

// Schrijf een programma, dat een voorwerp inleest
// en vervolgens afdrukt.

// nummer: 423
// naam: stoel
// gewicht: 4.5
// lengte: 90

// stoel heeft nummer 423, weegt 4.500000 kg en is 90.000000 cm

// Let op het volgende:
// - nadat je een waarde gelezen hebt, moet je de rest van de regel 'skippen'.
// - de format-specifier bij 'scanf' van een 'double' is: %lf

// Leerdoelen:
// - Oefenen met het inlezen van gegevens voor een struct-variabele.
// - Oefenen met het afdrukken van gegevens van een struct-variabele.

// Done?

#include <stdio.h>
#include <string.h>

int main(void)
{
	char t1[80];
	char t2[80];
	
	printf("tik tekst 1 in: ");
    fflush(stdout);
    fgets(t1, 80, stdin);
    int len1 = strlen(t1);
    if(t1[len1 - 1] == '\n') {
        t1[len1 - 1] = '\0'; // verwijder '\n' uit string
    } else {
        while(getchar() != '\n')
            ; // skip rest van regel
    }
	
	printf("tik tekst 2 in: ");
    fflush(stdout);
    fgets(t2, 80, stdin);
    int len2 = strlen(t2);
    if(t2[len2 - 1] == '\n') {
        t2[len2 - 1] = '\0'; // verwijder '\n' uit string
    } else {
        while(getchar() != '\n')
            ; // skip rest van regel
    }
	
	
	for (int i = 0; i < strlen(t1); i++) {
		if (t1[i] != t2[i]) {
			printf("het verschil in tekst begint bij index %d", i);
			break;
		}
	}
	
	return 0;
}

// Schrijf een programma dat twee teksten in twee 
// char-arrays inleest. Gebruik hierbij 'fgets'. 
// De char-arrays bevatten maximaal 80 karakters.
// Het programma zoekt de eerste letter waarbij deze 
// twee strings verschillen en drukt de waarde van
// de array-index af.

// tik tekst in: In zee met C
// tik tekst 2 in: In zee leven kwallen
// het verschil in tekst begint bij index 7

// Houd rekening met de volgende situatie: de ene
// regel kan in zijn geheel overeenkomen met het 
// voorste gedeelte van de andere regel.

// tik tekst 1 in: In zee met C
// tik tekst 2 in: In zee met C en Python

// Leerdoelen:
// - Oefenen met fgets.
// - Oefenen met het vergelijken van twee strings.

// Done?
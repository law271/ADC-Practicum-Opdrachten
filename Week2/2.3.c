#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80], temp;
	int i, j = 0;
	
	printf("tik tekst in: ");
	gets(str);
	
	i = 0;
	j = strlen(str) - 1;
	
	while (i < j) {
		temp = str[i];
		str[i] = str [j];
		str[j] = temp;
		i++;
		j--;
	}
	
	
	printf("in omgekeerde volgorde: %s", str);
	\
	return 0;
}

// Schrijf een programma dat een tekst in een char-array
// inleest. De char-array bevat maximaal 80 karakters. Draai
// vervolgens de inhoud van de char-array om. Gebruik 
// hierbij geen extra array.
// Doe dit op twee manieren:
// - met indices
// = met pointers

// tik tekst in: een voorbeeld
// in omgekeerde volgorde: dleebroov nee

// Leerdoelen:
// - Oefenen met het doorlopen van een array m.b.v. indices
// - Oefenen met het doorlopen van een array m.b.v. pointers

// Done?

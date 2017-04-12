#include <stdio.h>
#include <stdbool.h>

int count(int a[], int size, int n) 
{
	int x = 0;
	for (int i = 0; i < size; i++)
		if (a[i] == n) {
			x++;
		}
	return x;
	printf("%d zit er %d keer in\n", n, x);
}

bool valid_row(int a[], int size)
{
	int o = count(a, size, 1);
	int z = count(a, size, 0);
	
	for (int i = 0; i < size; i++) {
		if (o != z) {
			printf("Error! Aantal enen is niet gelijk aan aantal nullen\n");
			break;
		}
		
		if ((a[i] != 1) && (a[i] != 0)) {
			printf("Error! Rij bevat een ongeldige karakter\n");
			break;
		}
		
		if (a[i] == 1) {
			if (a[i+1] == 1) {
				if (a[i+2] == 1) {
					printf("Error! Voldoet niet aan de eisen, 1 zit er 3 keer in\n");
					break;
				}
			}
		}
		
		if (a[i] == 0) {
			if (a[i+1] == 0) {
				if (a[i+2] == 0) {
					printf("Error! Voldoet niet aan de eisen, 0 zit er 3 keer in\n");
					break;
				}
			}
		}
		
		else {
			printf("Voldoet helemaal aan de eisen.\n");
			break;
		}
	}
}

int main(void)
{
	int a1[] = { 1, 1, 0, 0, 1, 0, 1, 0 }; // Correct

	int size = sizeof(a1) / sizeof(a1[0]);

	valid_row(a1, size);
}

// Schrijf een functie, die bepaalt of een gegeven int-rij aan de volgende eisen voldoet:
//	- de rij bevat alleen nullen en enen
//	- het aantal enen is gelijk aan het aantal nullen
// 	- in de rij komt een getal niet drie keer achter elkaar voor



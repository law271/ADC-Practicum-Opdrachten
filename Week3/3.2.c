#include <stdio.h>
#include <stdbool.h>

void show_array(int a[], int size)
{
    for(int i = 0; i < size; i++)
        printf("%d ", a[i]);
	putchar('\n');
}

bool equal_rows(int a1[], int a2[], int size) 
{
	int x = 0;
	for (int i = 0; i < size; i++)
		if (a1[i] != a2[i]) {
			x = 0;
		}
		else {
			x++;
		}
		if (x == size) {
			printf("Gelijk");
		}
		else if ((x != size) || (size == 0)) {
			printf("Ongelijk");
		}
		putchar('\n');
}

int main(void)
{
	int a1[] = { 10, 20, 30 };
	int a2[] = { 10, 20, 30 };
	
	int size1 = sizeof(a1) / sizeof(a1[0]);
	int size2 = sizeof(a2) / sizeof(a2[0]);
	
	if (size1 == size2) {
		int size = size1;
		
		printf("Array 1: ");
		show_array(a1, size1);
		
		printf("Array 2: ");
		show_array(a2, size2);
		
		equal_rows(a1, a2, size);
	}
	
	else if (size1 != size2) {
		printf("Array 1: ");
		show_array(a1, size1);
		
		printf("Array 2: ");
		show_array(a2, size2);
		
		printf("Ongelijk");
	}
}

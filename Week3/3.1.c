#include <stdio.h>

void show_array(int a[], int size)
{
    for(int i = 0; i < size; i++)
        printf("%d ", a[i]);
}

int count(int a[], int size, int n) 
{
	int x = 0;
	for (int i = 0; i < size; i++)
		if (a[i] == n) {
			x++;
		}
	printf("%d zit er %d keer in", n, x);
}

int main(void)
{
	int a[] = { 200, 20, 3, 40 };
    int size = sizeof(a) / sizeof(a[0]);

    printf("a: ");
    show_array(a, size);
    putchar('\n');
	
	count(a, size, 3);
	putchar('\n');
}

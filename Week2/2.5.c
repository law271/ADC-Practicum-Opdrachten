#include <stdio.h>
#include <string.h>

int main(void)
{
	int matrix[][10] = {{-1,-1,-1,-1,-1,-1, 0, 1,-1, 1},
					   { 1,-1,-1,-1,-1,-1,-1,-1,-1, 1},
            		   {-1,-1, 0,-1, 1,-1,-1,-1,-1,-1},
            		   {-1,-1,-1,-1, 0,-1,-1,-1,-1,-1},
            		   {-1,-1,-1,-1,-1,-1, 0,-1,-1, 1},
            		   {-1,-1,-1,-1,-1,-1,-1,-1, 1,-1},
            		   {-1,-1,-1,-1,-1,-1, 0,-1,-1, 0},
            		   { 0,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            		   {-1,-1, 1, 1,-1,-1,-1,-1,-1, 1},
            		   { 0,-1, 1,-1,-1,-1,-1,-1, 0,-1}};
	
	
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
			if (matrix[i][j] == -1) {
				printf("- ", matrix[i][j]);
			}
			else if (matrix[i][j] != -1) {
				printf("%d ", matrix[i][j]);
			}
		}
        puts("");
    }
    putchar('\n');
	
	return 0;
}

// Schrijf een C-programma, waarbij een matrix als volgt is gedeclareerd:
 

// Druk de matrix af.

// ------01-1
// 1--------1
// --0-1-----
// ----0-----
// ------0--1
// -----1--1-
// ------0--0
// 0---------
// --11-----1
// 0-1-----0-

// Leerdoel:
// - Oefenen met tweedimensionale array

// Done?

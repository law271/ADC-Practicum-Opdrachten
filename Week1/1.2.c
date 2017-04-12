#include <stdio.h>
#include <ctype.h>

int main (void)
{
   
   char c;
   printf("Voer een karakter in: ");
   c = getchar();
   printf("Ingevoerde karakter: %c\n", c);
   
   // If capital letter -> print ASCII hexadecimaal
   if ('A' <= c && c <= 'Z')
	   printf("ASCII hexadecimaal: %#x\n", c);
   
   // If small letter -> print decimaal
   else if ('a' <= c && c <= 'z')
	   printf("Decimaal: %d\n", (char)c);

   // If not a letter -> print symbol
   else
	   printf("Symbool: %c\n", c);
 
   return(0);
}

// Done
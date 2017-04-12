int main(void) {
    int i = 0;
    int ch;
	int sign = 0;
	

    printf("voer een getal in met een '+' of '-' ervoor: \n");	
	ch = getchar();
	
	if (ch == '-') {
		sign = -1;
	}
	
	else if (ch == '+') {
		sign = 1;
	}
	
	else if (ch <= '9' && ch >= '0') {
		printf("Error! Voer een waarde in!\n");
	}
	

    while ((ch = getchar()) != '\n') {
		if (ch <= '9' && ch >= '0')  {
			if (sign == -1) {
				i *= 10;
				i += -(ch - '0');
			}
			
			else if (sign == 1) {
				i *= 10;
				i += ch - '0';
			}
			
			else if (sign == 0) {
				printf("Error! Ongeldige invoer!\n");
				sign = 0;
				break;
			}
		}
		
		else {
			printf("Error! Ongeldige invoer!\n");
			sign = 0;
			break;
		}
	}
	
	
	if (sign != 0) {
		printf("Het ingevoerde getal is: %d\n", i);
	}
	
	
	return 0;
}

// Done

// More than 10 numbers will break it :/ 

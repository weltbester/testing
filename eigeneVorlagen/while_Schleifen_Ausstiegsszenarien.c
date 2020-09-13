#################################################################
while (taste == 'j' || taste == 'J') {
        printf("\n--------------------------------------------\n"
        "Geben Sie ein Wort ein: ");
        
        printf("\nWiederholen (j/n) ");
        do {
            taste = getchar() | 0x20;
        } while ( taste != 'j' && taste != 'n');
        fflush(stdin); 
    }
#################################################################

#include <stdio.h>
int main(){

 int i;
 char caractere = 32;

printf("  _____  _    ____  _____ _        _                 _    ____   ____ ___ ___  \n");
printf(" |_   _|/ \\  | __ )| ____| |      / \\               / \\  / ___| / ___|_ _|_ _| \n");
printf("   | | / _ \\ |  _ \\|  _| | |     / _ \\    _____    / _ \\ \\___ \\| |    | | | |  \n");
printf("   | |/ ___ \\| |_) | |___| |___ / ___ \\  |_____|  / ___ \\ ___) | |___ | | | |  \n");
printf("   |_/_/   \\_\\____/|_____|_____/_/   \\_\\         /_/   \\_\\____/ \\____|___|___| \n\n");

printf("- - - 32 até 126 - - -\n\n");

for(i = 32; i <= 126; i++){

    printf("%.3d -> %c -> %X\n", i, caractere,i);
    caractere++;

}
 return 0;}  

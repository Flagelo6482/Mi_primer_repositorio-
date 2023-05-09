#include <stdio.h>

int main(void){
    int c;
    while( (c = getchar()) != EOF ) {
        putchar( c );
    }
    printf("CTRL + D pressed..");

    printf("The value of EOF is: %d\n", EOF);

    return 0;
}

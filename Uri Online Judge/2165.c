#include <stdio.h>
#include <string.h>

int main() {
    char texto[501];
    
    scanf("%[^\n]", texto);
    
    if(strlen(texto)<=140)
        printf("TWEET\n");
    else
        printf("MUTE\n");

    return 0;
}
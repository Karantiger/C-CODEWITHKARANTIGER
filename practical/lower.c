#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int main() {
    char str[100]; 
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin); 

    
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

   
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = toupper(str[i]); 
        }
    }

    printf("Converted string: %s\n", str);
    return 0; 
}
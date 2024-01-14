#include <stdio.h>
#include <string.h>

int main(void) {
    char str[] = "hello";
    
    printf("String: %s\n", str);
  
    printf("Length using strlen: %lu\n", strlen(str));
    
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    printf("Length using loop: %d\n", length);
    
    return 0;
}

/**name:Tathagat D Dethe
Div:F 
Branch:Mechanical
Roll No: 30
UIN NO:251M033**/
#include <stdio.h>
#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        length++;
    }

    printf("Length of the string = %d\n", length);

    return 0;
}


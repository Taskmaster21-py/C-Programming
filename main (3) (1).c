/**name:Tathagat D Dethe
Div:F 
Branch:Mechanical
Roll No: 30
UIN NO:251M033**/

#include <stdio.h>

int main() {
    int n, number, sum = 0;

    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        if (number % 2 != 0) {
            sum += number;
        }
    }

    printf("Sum of all odd numbers entered: %d\n", sum);

    return 0;
}


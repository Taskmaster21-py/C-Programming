/**name:Tathagat D Dethe
Div:F 
Branch:Mechanical
Roll No: 30
UIN NO:251M033**/
#include <stdio.h>

int main() {
    int start, end, i, sum = 0;
    
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
    
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    for (i = start; i <= end; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    // Display result
    printf("The sum of all odd numbers between %d and %d is: %d\n", start, end, sum);

    return 0;
}



    

/**name:Tathagat D Dethe
Div:F 
Branch:Mechanical
Roll No: 30
UIN NO:251M033**/
#include <stdio.h>

long long factorial_iterative(int n);
long long factorial_recursive(int n);

int main() {
    int num;
    long long fact_iter, fact_rec;

    
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }
    
    fact_iter = factorial_iterative(num);
    fact_rec = factorial_recursive(num);

    
    printf("\nFactorial of %d (Iterative) = %lld\n", num, fact_iter);
    printf("Factorial of %d (Recursive) = %lld\n", num, fact_rec);

    return 0;
}
long long factorial_iterative(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

long long factorial_recursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial_recursive(n - 1);
}



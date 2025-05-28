# Combination-calculator-C
A simple C program to calculate combinations (n C r)

#include <stdio.h>

// Factorial function
int facto(int n) {
    int m = 1;
    for(int i = n; i >= 1; i--) {
        m = i * m;
    }
    return m;
}

int main() {
    int n, r;
    printf("Enter the nth term (n): ");
    scanf("%d", &n);

    printf("Enter the rth term (r): ");
    scanf("%d", &r);

    if (r > n || n < 0 || r < 0) {
        printf("Invalid input. Make sure that 0 <= r <= n.\n");
        return 1;
    }

    int comb = facto(n) / (facto(r) * facto(n - r));
    printf("The combination C(%d, %d) is: %d\n", n, r, comb);

    return 0;
}

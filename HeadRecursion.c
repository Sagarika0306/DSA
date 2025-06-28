#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;

    int result = factorial(n - 1);  // recursive call first (head recursion)
    return n * result;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial (Head Recursion) of %d is %d\n", num, factorial(num));
    return 0;
}

#include <stdio.h>

int factorialTail(int n, int result) {
    if (n == 0 || n == 1)
        return result;

    return factorialTail(n - 1, n * result);  // recursive call is last (tail recursion)
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial (Tail Recursion) of %d is %d\n", num, factorialTail(num, 1));
    return 0;
}

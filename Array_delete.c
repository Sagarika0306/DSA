#include <stdio.h>

int main() {
    int arr[100], n, i, pos;

    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the position to delete (0 to %d): ", n - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Invalid position!\n");
    } else {
        for (i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
    }

    
    printf("Array after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

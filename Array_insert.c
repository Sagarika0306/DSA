#include <stdio.h>

int main() {
    int arr[100], n, i, pos, item;

    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the item to insert: ");
    scanf("%d", &item);

    printf("Enter the position to insert (0 to %d): ", n);
    scanf("%d", &pos);

    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
    } else {
        for (i = n; i > pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos] = item;
        n++;
    }

    
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

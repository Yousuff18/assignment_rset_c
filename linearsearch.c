#include <stdio.h>

int main() {
    int n, b;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n]; 

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]); 
    }

    printf("Enter the element to search: ");
    scanf("%d", &b);

    int x = 0; 
    for (int i = 0; i < n; i++) {
        if (a[i] == b) {
            printf("Element found at index: %d\n", i);
            x = 1;
            break;
        }
    }

    if (!x) {
        printf("Element not in the array.\n");
    }

    return 0;
}



#include <stdio.h>

int main() {
    int a[100], n, i, last;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Right rotate by 1 position
    last = a[n - 1];

    for(i = n - 1; i > 0; i--) {
        a[i] = a[i - 1];
    }

    a[0] = last;

    printf("Array after right rotation:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
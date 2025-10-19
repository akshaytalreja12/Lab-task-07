#include <stdio.h>

int main() {
    int n, k,i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    int a[n], g[n];

    printf("Enter employee IDs:\n");
    for ( i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter k (positions to rotate right): ");
    scanf("%d", &k);

    k = k % n; 
    for ( i = 0; i < n; i++) {
        g[(i + k) % n] = a[i];
    }


    for ( i = 0; i < n; i++) {
        a[i] = g[i];
    }

    printf("New shift order:\n");
    for ( i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}


#include <stdio.h>

int main() {
    int i, j, k, m, n;
    
    // Input the size of array a and b
    scanf("%d %d", &m, &n);
    
    int a[m], b[n];
    
    // Input the elements of array a
    for (i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }
    
    // Input the elements of array b
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    
    int z = 0;
    
    // Iterate through possible factors
    for (i = 1; i <= b[n - 1]; i++) {
        int isFactorA = 1;
        
        // Check if i is a multiple of all elements in a
        for (j = 0; j < m; j++) {
            if (i % a[j] != 0) {
                isFactorA = 0;
                break;
            }
        }
        
        if (isFactorA) {
            // Check if i is a factor of all elements in b
            int isFactorB = 1;
            for (k = 0; k < n; k++) {
                if (b[k] % i != 0) {
                    isFactorB = 0;
                    break;
                }
            }
            if (isFactorB) {
                z++;
            }
        }
    }
    
    // Output the result
    printf("%d", z);
    
    return 0;
}

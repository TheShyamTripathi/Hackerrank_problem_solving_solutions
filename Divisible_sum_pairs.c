#include <stdio.h>

int main() {
    int i, j, n, k;
    
    // Read the size of the array and the target sum
    scanf("%d %d", &n, &k);
    int arr[n];
    
    // Read the elements of the array
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int s = 0;
    
    // Loop through the array to find pairs that sum up to k
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if ((arr[i] + arr[j])%k==0) {
                s++;
            }
        }
    }
    
    // Print the result
    printf("%d\n", s);
    return 0;
}

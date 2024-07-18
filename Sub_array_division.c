#include <stdio.h>

int main() {
    int i, j, n, d, m;
    
    // Read the size of the array
    scanf("%d", &n);
    int s[n];
    
    // Read the elements of the array
    for(i = 0; i < n; i++) {
        scanf("%d", &s[i]);
    }
    
    // Read d and m
    scanf("%d %d", &d, &m);
    
    int a = 0, temp;
    
    // Loop through the array and find subarrays of length m
    for(i = 0; i <= n - m; i++) {
        temp = 0;
        
        // Sum the elements of the current subarray
        for(j = i; j < i + m; j++) {
            temp += s[j];
        }
        
        // Check if the sum equals d
        if(temp == d) {
            a++;
        }
    }
    
    // Print the result
    printf("%d", a);
    
    return 0;
}
